"""Delivery-zone search with red-zone avoidance, without ROS (target_search_node.py adapts it to ROS;
the tests and tools/offline_check run it against simulated drones).

Structure from suas_aer target_search (platform interface, geofence -> flight area, frame/pose pairing,
QR candidates, best-candidate fallback); flying and red-zone avoidance from Shiva007-RAndom's
lawnmower_mission.py + avoidance.py (RedMap, Navigator/Detour, Coverage, Slew).

All avoidance runs in the zone frame (red_avoidance.zone_frame): x_z along the geofence's long side,
origin at its centre. What it does:
  1. Geofence corners (lat/lon) -> local NED -> minimum-area rectangle; shrunk by wall_margin it is the
     flight area ("room").
  2. Rows along the long side, spaced from the camera footprint and `overlap`, centred across the zone;
     a serpentine starting at the corner nearest the drone.
  3. Every red_zone_detector frame is paired with the drone pose of its own time (header stamp) and
     marks the ground it covers (Coverage); its red outlines are projected to the ground into the
     RedMap. The Navigator steers each leg round red + margin (detour corners, escape if inside),
     and a Slew carrot point is streamed to flight_controller (~/setpoint).
  4. Every QR detection is projected to the ground the same way and clustered into candidates.
     `confirm_matches` matched detections of one candidate outside red + margin stop the search, if at
     least one of them decoded to the reference text. A candidate ever decoded to ANOTHER text is a decoy
     (an undecoded QR can pass the grid threshold). Grid-only matches are accepted after the sweep.
  5. No match: the best-scoring candidate outside the red. Then fly there round the red.

Platform interface (the ROS node or a simulator):
    now()                                  s, same clock as the record stamps
    sleep(seconds)
    position()                             (north, east, down, heading, alt_above_takeoff) or None
    stream(north, east, down, yaw)         one carrot setpoint
    stop_stream()                          stop streaming (flight_controller holds position)
    goto(north, east, down, yaw, speed)    blocking GoTo -> (ok, message)
    cancel_requested()
    feedback(**fields)                     state, steering, best_score, red_zones
    log(level, text)                       "info" | "warn" | "error"
and calls on_pose / on_red / on_qr from any thread.
"""
import math
import threading
from dataclasses import dataclass, field

from red_avoidance.avoidance import (
    Coverage, Navigator, PoseHistory, RedMap, Slew, footprint as frame_box, project_pixel,
)
from red_avoidance.zone_frame import ZoneFrame
from target_search import geometry as geo

STALE_POSE = 0.5          # s: a pose further than this from the frame time is not used


@dataclass
class Config:
    hfov: float = 1.22                 # rad
    camera_latency: float = 0.0        # s from the frame stamp back to when it was really taken
    camera_on_gimbal: bool = True      # gimbal holds the camera straight down: ignore roll / pitch
    max_tilt: float = 0.12             # rad; fixed camera only: frames taken tilted more are ignored
    geofence_tolerance: float = 1.0    # m outside the geofence a QR may land and still count
    accel: float = 3.0                 # m/s^2, carrot point (repo --accel)
    max_lead: float = 0.0              # m, carrot never further ahead (0 = max(1, 1.1 x speed), repo default)
    period: float = 0.05               # s between setpoints (20 Hz)
    footprint_shrink: float = 0.4      # m, as the repo's on_red
    cluster_radius: float = 1.5        # m: QR detections closer than this are the same tile
    no_frames_timeout: float = 10.0    # s without any red_zone_detector frame before the search fails
    transit_pad: float = 10.0          # m added round start/goal for SafeGoto detours
    arrive_tolerance: float = 0.6      # m (repo: a leg is reached within 0.6 m)
    pose_timeout: float = 2.0          # s to wait for a fresh pose before the search fails


@dataclass
class Request:
    altitude: float                    # m above take-off
    yaw: float                         # heading to hold; NaN = "wide ahead" (see heading_for)
    wall_margin: float = 1.0
    overlap: float = 0.2
    rows: int = 0
    speed: float = 1.2
    margin: float = 2.0                # red keep-out (repo --margin default)
    confirm: int = 2                   # repo --confirm
    max_revisits: int = 0
    revisit_time: float = 300.0
    skip_fly: bool = False             # report the chosen QR without flying to it (target_navigator does)


@dataclass
class Candidate:
    north: float
    east: float
    score: float
    text: str
    hits: int = 1
    matched_hits: int = 0
    t: float = 0.0
    decoy: bool = False                 # decoded at least once to a text qr_detector did NOT match
    text_matches: int = 0               # matched detections with the decoded text equal to the reference


@dataclass
class Outcome:
    status: str                         # "success" | "failed" | "canceled"
    message: str
    matched: bool = False
    score: float = 0.0
    text: str = ""
    target: tuple = (0.0, 0.0)
    red_zones: int = 0
    coverage: float = 0.0


@dataclass
class _Zone:
    frame: ZoneFrame
    rect: object          # geofence rectangle (geometry.Rect, NED)
    room: tuple           # flight area in the zone frame ((xmin, xmax), (ymin, ymax))
    red: RedMap = None
    cover: Coverage = None
    image_size: list = field(default_factory=lambda: [1280, 720])


class SearchError(Exception):
    pass


class SearchMission:
    def __init__(self, platform, config):
        self.p = platform
        self.cfg = config
        self.lock = threading.RLock()
        self.poses = PoseHistory(maxlen=400)   # (t, north, east, alt, heading, roll, pitch)
        self.zone = None
        self.candidates = []
        self.active = False
        self.start_t = 0.0
        self.frames = 0
        self.best_score = 0.0
        self.margin = 2.0

    # ------------------------------------------------------------------ intake (any thread)

    def on_pose(self, t, north, east, alt, heading, roll=0.0, pitch=0.0):
        self.poses.add(t, north, east, alt, heading, roll, pitch)

    def _pose_at(self, t):
        t = t - self.cfg.camera_latency
        p = self.poses.at(t)
        if p is None:
            return None
        nearest = min(list(self.poses._h), key=lambda s: abs(s[0] - t))
        if abs(nearest[0] - t) > STALE_POSE:
            return None
        return p   # (north, east, alt, heading, roll, pitch)

    def _drone(self, pose):
        north, east, alt, heading, roll, pitch = pose
        if self.cfg.camera_on_gimbal:
            return self.zone.frame.drone(north, east, alt, heading)
        return self.zone.frame.drone(north, east, alt, heading, roll, pitch)

    def on_red(self, t, width, height, patches):
        """patches: [[(u, v), ...], ...] outlines in pixels (one entry per red patch)."""
        with self.lock:
            if not self.active or self.zone is None or t < self.start_t:
                return
            pose = self._pose_at(t)
            if pose is None or pose[2] < 0.5:            # no pose for this frame, or not airborne
                return
            self.frames += 1
            self.zone.image_size[:] = [width, height]
            drone = self._drone(pose)
            fp = frame_box(drone, self.cfg.hfov, width, height, shrink=self.cfg.footprint_shrink,
                           max_tilt=self.cfg.max_tilt)
            if (fp is not None and not self.cfg.camera_on_gimbal
                    and self.poses.max_tilt(t - 0.5, t + 0.5) > self.cfg.max_tilt):
                fp = None                                 # tilting fast: pose and picture will not line up
            if fp is None:
                return
            self.zone.cover.mark(fp)
            changed = False
            for outline in patches:
                poly = [q for q in (project_pixel(u, v, drone, self.cfg.hfov, width, height) for u, v in outline)
                        if q is not None]
                if len(poly) >= 3:
                    changed |= self.zone.red.add_polygon(poly)
            if changed:
                boxes = "  ".join(f"[x {b[0]:.1f}..{b[2]:.1f}, y {b[1]:.1f}..{b[3]:.1f}]" for b in self.zone.red.boxes)
                self.p.log("info", f"red map (zone frame): {boxes}")

    def on_qr(self, t, width, height, u, v, matched, score, text):
        with self.lock:
            if not self.active or self.zone is None or t < self.start_t:
                return
            pose = self._pose_at(t)
            if pose is None or pose[2] < 0.5:
                return
            g = project_pixel(u, v, self._drone(pose), self.cfg.hfov, width, height)
            if g is None:
                return
            r = self.zone.rect
            if abs(g[0]) > r.hu + self.cfg.geofence_tolerance or abs(g[1]) > r.hv + self.cfg.geofence_tolerance:
                return                                    # outside the delivery zone
            north, east = self.zone.frame.to_ned(*g)
            for c in self.candidates:
                if math.hypot(c.north - north, c.east - east) < self.cfg.cluster_radius:
                    k = c.hits
                    c.north, c.east = (c.north * k + north) / (k + 1), (c.east * k + east) / (k + 1)
                    c.hits += 1
                    c.score = max(c.score, float(score))
                    c.text = c.text or text
                    break
            else:
                c = Candidate(north, east, float(score), text, t=t)
                self.candidates.append(c)
            if text and not matched and not c.decoy:
                # A decoded text that is not the reference: a different QR, whatever its grid score
                # (frames where it was not decoded can still pass the grid threshold).
                c.decoy, c.text = True, text
                if c.matched_hits:
                    self.p.log("warn", f"QR at N={c.north:.1f} E={c.east:.1f} decoded as '{text}', not the "
                                       f"reference: discarding its {c.matched_hits} grid match(es)")
            if matched:
                c.matched_hits += 1
                if text:
                    c.text_matches += 1
                if c.matched_hits == 1:
                    self.p.log("info", f"QR match (score {score:.2f}, '{text}') at N={north:.1f} E={east:.1f}")
            self.best_score = max(self.best_score, float(score))

    # ------------------------------------------------------------------ queries

    def _clear_of_red(self, c):
        x, y = self.zone.frame.to_zone(c.north, c.east)
        return not self.zone.red.blocked((x, y), self.margin)

    def _valid_match(self, confirm, decoded=False):
        """A candidate with `confirm` matched detections, never decoded to another text, outside the red.
        decoded=True (stopping the sweep early): at least one of them decoded to the reference text, because
        an undecoded QR can pass the grid threshold although it is a different code."""
        with self.lock:
            for c in self.candidates:
                if c.matched_hits >= confirm and not c.decoy and (not decoded or c.text_matches > 0):
                    if self._clear_of_red(c):
                        return c
        return None

    def _best_candidate(self):
        """Best grid score outside the red (the no-match fallback)."""
        with self.lock:
            usable = [c for c in self.candidates if self._clear_of_red(c)]
            return max(usable, key=lambda c: (c.score, c.hits), default=None)

    def red_zones(self):
        with self.lock:
            return 0 if self.zone is None else len(self.zone.red.boxes)

    def coverage(self):
        with self.lock:
            if self.zone is None:
                return 0.0
            g = self.zone.cover.grid
            return sum(g) / max(1, len(g))

    def red_snapshot(self):
        """(ZoneFrame, RedMap, margin) for publishing, or None before the first search."""
        with self.lock:
            return None if self.zone is None else (self.zone.frame, self.zone.red, self.margin)

    # ------------------------------------------------------------------ zone setup

    def setup_zone(self, geofence_latlon, ref, wall_margin):
        corners = [geo.latlon_to_ned(lat, lon, *ref) for lat, lon in geofence_latlon]
        try:
            rect = geo.fit_rect(corners)
        except ValueError as exc:
            raise SearchError(f"geofence: {exc}") from exc
        hu, hv = rect.hu - wall_margin, rect.hv - wall_margin
        if hu <= 0.5 or hv <= 0.5:
            raise SearchError(f"geofence {2 * rect.hu:.1f} x {2 * rect.hv:.1f} m is too small for a "
                              f"{wall_margin:.1f} m wall margin")
        frame = ZoneFrame(rect.cx, rect.cy, math.atan2(rect.uy, rect.ux))
        room = ((-hu, hu), (-hv, hv))
        with self.lock:
            self.zone = _Zone(frame, rect, room, RedMap(room), Coverage(room))
            self.candidates = []
            self.best_score = 0.0
            self.frames = 0
        self.p.log("info", (f"delivery zone {2 * rect.hu:.1f} x {2 * rect.hv:.1f} m centred N={rect.cx:.1f} "
                            f"E={rect.cy:.1f}, long side bearing {math.degrees(frame.axis_heading) % 180:.0f} deg; "
                            f"flight area {2 * hu:.1f} x {2 * hv:.1f} m"))

    def heading_for(self, req, current):
        """Heading held during the search. NaN in the request = "wide ahead": the camera's long image
        side along the rows (heading = row axis +/- 90 deg, whichever is nearer the current heading).
        A 16:9 frame then sees half its WIDTH ahead (3.5 m at 5 m, hfov 1.22) instead of half its
        height (1.95 m): red is seen before the drone is inside red_zone_margin. Rows get closer."""
        if math.isfinite(req.yaw):
            return req.yaw
        axis = self.zone.frame.axis_heading
        options = [geo.wrap_pi(axis + math.pi / 2), geo.wrap_pi(axis - math.pi / 2)]
        return min(options, key=lambda h: abs(geo.wrap_pi(h - current)))

    def plan_rows(self, req, heading):
        """Serpentine rows along x_z in the zone frame, starting at the end nearest the drone."""
        z = self.zone
        w, h = z.image_size
        phi = geo.wrap_pi(z.frame.axis_heading - heading)       # rows relative to the camera's nose
        across, along = geo.footprint(req.altitude, self.cfg.hfov, w, h)
        cross, _ = geo.footprint_extents(across, along, phi)
        spacing = (1.0 - req.overlap) * cross
        (x0, x1), (y0, y1) = z.room
        width = y1 - y0
        rows = req.rows if req.rows > 0 else geo.rows_needed(width, cross, spacing)
        if rows > 1:
            spacing = min(spacing, width / (rows - 1))
        offsets = [(k - (rows - 1) / 2.0) * spacing for k in range(rows)]
        pos = self.p.position()
        start = z.frame.to_zone(pos[0], pos[1]) if pos else (0.0, 0.0)
        best = None
        for order in (offsets, offsets[::-1]):
            for first in (x0, x1):
                path, end = [], first
                for y in order:
                    other = x1 if end == x0 else x0
                    path += [(end, y), (other, y)]
                    end = other
                d = math.dist(start, path[0])
                if best is None or d < best[0] - 1e-9:
                    best = (d, path)
        coverage = (rows - 1) * spacing + cross
        self.p.log("info", (f"{rows} rows along the long side, {spacing:.1f} m apart; frames cover "
                            f"{cross:.1f} m across the rows" + ("" if coverage >= width - 0.01 else
                                                                f" (only {coverage:.1f} of {width:.1f} m!)")))
        return best[1]

    # ------------------------------------------------------------------ flying (repo main loop)

    def _fly(self, nav, z_down, yaw, speed, watch_confirm=0, label=""):
        """Follow `nav` with the slewed carrot until it is done.
        Returns "done", "match" or "canceled"; raises SearchError on a lost position."""
        cfg = self.cfg
        max_lead = cfg.max_lead if cfg.max_lead > 0 else max(1.0, 1.1 * speed)
        slew = Slew(speed, cfg.accel, max_lead)
        pos = self._position()
        slew.reset(pos[:3])
        status, prev_status, last_fb = "direct", "direct", 0.0
        t_prev = self.p.now()   # the carrot moves in the platform's time (repo: the drone's own time)
        try:
            while True:
                pos = self._position()
                now = self.p.now()
                if self.p.cancel_requested():
                    return "canceled"
                if watch_confirm and self._valid_match(watch_confirm, decoded=True) is not None:
                    return "match"
                if self.active and self.frames == 0 and now - self.start_t > cfg.no_frames_timeout:
                    raise SearchError(f"no camera frames with a pose in {cfg.no_frames_timeout:.0f} s: are "
                                      "red_zone_detector and the camera running?")
                with self.lock:
                    here = self.zone.frame.to_zone(pos[0], pos[1])
                    step_tgt, new_status = nav.update(here, now)
                    tgt_ned = None if step_tgt is None else self.zone.frame.to_ned(*step_tgt)
                if new_status == "done":
                    return "done"
                if new_status != status:
                    status = new_status
                    self.p.log("info", f"  steering: {status} at N={pos[0]:.1f} E={pos[1]:.1f} ({nav.label})")
                if now - last_fb >= 0.5:
                    last_fb = now
                    self.p.feedback(state=f"{label}{nav.label}", steering=status, best_score=self.best_score,
                                    red_zones=self.red_zones())
                dt, t_prev = min(max(now - t_prev, 0.0), 0.3), now
                if tgt_ned is None:                        # no way round for now: hold position
                    slew.pull_back(pos[:3])
                    self.p.stream(*slew.cur, yaw)
                    self.p.sleep(cfg.period)
                    continue
                tgt = [tgt_ned[0], tgt_ned[1], z_down]
                if new_status != prev_status and new_status in ("detour", "escape"):
                    slew.pull_back(pos[:3])                # red ahead: brake now, do not run on
                elif new_status == "escape":
                    slew.pull_back(pos[:3])
                prev_status = new_status
                cur = slew.step(tgt, pos[:3], dt, stopping=new_status in ("detour", "escape"))
                self.p.stream(cur[0], cur[1], cur[2], yaw)
                self.p.sleep(cfg.period)
        finally:
            self.p.stop_stream()

    def _look_ahead(self, req, heading):
        w, h = self.zone.image_size
        across, along = geo.footprint(req.altitude, self.cfg.hfov, w, h)
        _, along_track = geo.footprint_extents(across, along, geo.wrap_pi(self.zone.frame.axis_heading - heading))
        return along_track / 2.0

    def _position(self):
        pos = self.p.position()
        deadline = self.p.now() + self.cfg.pose_timeout
        while pos is None and self.p.now() < deadline:
            self.p.sleep(0.05)   # a short stall in the pose stream is not a lost vehicle
            pos = self.p.position()
        if pos is None:
            raise SearchError("lost the vehicle position")
        return pos

    def _navigator(self, route, room, speed, req=None):
        z = self.zone
        nav = Navigator([tuple(w) for w in route], room, z.red, z.cover, margin=self.margin, speed=speed,
                        revisit_time=req.revisit_time if req else 0.0,
                        max_revisits=req.max_revisits if req else 0,
                        carrot=max(2.5, (self.cfg.max_lead or max(1.0, 1.1 * speed)) + 1.0),
                        log=lambda text: self.p.log("info", text))
        return nav

    # ------------------------------------------------------------------ search

    def run(self, req, geofence_latlon, ref):
        try:
            return self._run(req, geofence_latlon, ref)
        except SearchError as exc:
            self.p.log("error", f"search failed: {exc}")
            return Outcome("failed", str(exc), red_zones=self.red_zones(), coverage=self.coverage())
        finally:
            self.active = False

    def _run(self, req, geofence_latlon, ref):
        if not (req.altitude > 0.5 and 0.0 <= req.overlap < 1.0 and req.speed > 0.0 and req.margin >= 0.0
                and self.cfg.hfov > 0.0 and req.confirm >= 1):
            raise SearchError("invalid goal (altitude, overlap, speed, margin, confirm) or hfov")
        pos = self._position()
        self.setup_zone(geofence_latlon, ref, req.wall_margin)
        self.margin = req.margin
        heading = self.heading_for(req, pos[3])
        z_down = pos[2] + pos[4] - req.altitude          # NED z of `altitude` above take-off
        self.start_t = self.p.now()
        self.active = True
        ahead = self._look_ahead(req, heading)
        self.p.log("info" if ahead > req.margin else "warn",
                   f"search heading {math.degrees(heading):.0f} deg: the camera sees {ahead:.1f} m ahead along the "
                   f"rows (red margin {req.margin:.1f} m)" + ("" if ahead > req.margin else
                                                              ": red will be seen only inside the margin"))
        route = self.plan_rows(req, heading)
        nav = self._navigator(route, self.zone.room, req.speed, req)
        out = self._fly(nav, z_down, heading, req.speed, watch_confirm=req.confirm, label="sweep: ")
        if out == "canceled":
            return Outcome("canceled", "canceled")
        cand = self._valid_match(req.confirm, decoded=True)
        if cand is None:
            cand = self._valid_match(req.confirm)   # grid-only matches (never decoded), as the original script
            if cand is not None:
                self.p.log("warn", f"no QR decoded to the reference text; accepting the grid match at "
                                   f"N={cand.north:.1f} E={cand.east:.1f} ({cand.matched_hits} detections)")
        matched = cand is not None
        if not matched:
            cand = self._best_candidate()
            if cand is None:
                raise SearchError("no QR code was seen in the delivery zone (outside the red)")
            self.p.log("warn", f"no QR matched the reference; going to the best candidate (score {cand.score:.2f}, "
                               f"'{cand.text}')")
        if req.skip_fly:
            self.p.log("info", f"{'matched QR' if matched else 'best candidate'} at N={cand.north:.1f} "
                               f"E={cand.east:.1f}: handing over to target_navigator")
            return Outcome("success", "matched QR found" if matched else "no QR matched: best candidate chosen",
                           matched, cand.score, cand.text, (cand.north, cand.east), self.red_zones(),
                           self.coverage())
        with self.lock:
            target = self.zone.frame.to_zone(cand.north, cand.east)
            (x0, x1), (y0, y1) = self.zone.room
            target = (min(max(target[0], x0), x1), min(max(target[1], y0), y1))
        self.p.log("info", f"flying to the {'matched QR' if matched else 'best candidate'} at "
                           f"N={cand.north:.1f} E={cand.east:.1f} round the red")
        out = self._fly(self._navigator([target], self.zone.room, req.speed), z_down, heading, req.speed,
                        label="to target: ")
        if out == "canceled":
            return Outcome("canceled", "canceled")
        pos = self._position()
        tgt_ned = self.zone.frame.to_ned(*target)
        if math.hypot(pos[0] - tgt_ned[0], pos[1] - tgt_ned[1]) > 1.5:
            raise SearchError("could not reach the target round the red")
        return Outcome("success", "matched QR found" if matched else "no QR matched: at the best candidate",
                       matched, cand.score, cand.text, (cand.north, cand.east), self.red_zones(), self.coverage())

    # ------------------------------------------------------------------ SafeGoto

    def safe_goto(self, north, east, down, yaw, speed):
        """Fly to a point keeping clear of the mapped red. Returns (ok, message, detoured)."""
        pos = self._position()
        with self.lock:
            zone = self.zone
            empty = zone is None or not zone.red.grid.any()
            clear = True
            if not empty:
                a = zone.frame.to_zone(pos[0], pos[1])
                b = zone.frame.to_zone(north, east)
                clear = zone.red.segment_clear(a, b, self.margin, skip=0.0)
        if empty or clear:
            ok, msg = self.p.goto(north, east, down, yaw, speed)
            return ok, msg, False
        self.p.log("info", f"SafeGoto: straight line to N={north:.1f} E={east:.1f} passes the red: detouring")
        pad = self.cfg.transit_pad
        xs, ys = [a[0], b[0], zone.room[0][0], zone.room[0][1]], [a[1], b[1], zone.room[1][0], zone.room[1][1]]
        room = ((min(xs) - pad, max(xs) + pad), (min(ys) - pad, max(ys) + pad))
        hold_yaw = yaw if math.isfinite(yaw) else pos[3]
        try:
            out = self._fly(self._navigator([b], room, speed), down, hold_yaw, speed, label="safe goto: ")
        except SearchError as exc:
            return False, str(exc), True
        if out == "canceled":
            return False, "canceled", True
        ok, msg = self.p.goto(north, east, down, yaw, speed)     # final, exact
        return ok, msg, True
