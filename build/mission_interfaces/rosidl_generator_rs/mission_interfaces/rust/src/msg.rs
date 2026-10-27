#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to mission_interfaces__msg__VehicleState
/// Vehicle state published by flight_controller (MAVROS) or bench_flight_controller on
/// /flight_controller/pose. Every mission node reads the drone pose from here, so the bench
/// controller can stand in for the real one without any other node noticing.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// local position is valid
    pub valid: bool,

    /// autopilot connected, booted and has a GPS fix (bench: always true)
    pub ready: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub armed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub airborne: bool,

    /// flight mode as reported by the autopilot ("GUIDED", "GUIDED_NOGPS", ...)
    pub mode: std::string::String,

    /// "mavros" | "bench"
    pub controller: std::string::String,

    /// Local NED position from the EKF origin (m), heading 0 = north clockwise (rad)
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub heading: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vx: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vy: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vz: f32,

    /// m above home (take-off point); NaN if unknown
    pub alt_rel: f32,

    /// Attitude (NED earth, FRD body), rad. Used to drop camera frames taken while banking hard.
    pub roll: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch: f32,

    /// Geographic position of the local frame's origin (geofence files are lat/lon)
    pub xy_global: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ref_lat: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ref_lon: f64,

}



impl Default for VehicleState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleState::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleState {
  type RmwMsg = super::msg::rmw::VehicleState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        valid: msg.valid,
        ready: msg.ready,
        armed: msg.armed,
        airborne: msg.airborne,
        mode: msg.mode.as_str().into(),
        controller: msg.controller.as_str().into(),
        x: msg.x,
        y: msg.y,
        z: msg.z,
        heading: msg.heading,
        vx: msg.vx,
        vy: msg.vy,
        vz: msg.vz,
        alt_rel: msg.alt_rel,
        roll: msg.roll,
        pitch: msg.pitch,
        xy_global: msg.xy_global,
        ref_lat: msg.ref_lat,
        ref_lon: msg.ref_lon,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      valid: msg.valid,
      ready: msg.ready,
      armed: msg.armed,
      airborne: msg.airborne,
        mode: msg.mode.as_str().into(),
        controller: msg.controller.as_str().into(),
      x: msg.x,
      y: msg.y,
      z: msg.z,
      heading: msg.heading,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      alt_rel: msg.alt_rel,
      roll: msg.roll,
      pitch: msg.pitch,
      xy_global: msg.xy_global,
      ref_lat: msg.ref_lat,
      ref_lon: msg.ref_lon,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      valid: msg.valid,
      ready: msg.ready,
      armed: msg.armed,
      airborne: msg.airborne,
      mode: msg.mode.to_string(),
      controller: msg.controller.to_string(),
      x: msg.x,
      y: msg.y,
      z: msg.z,
      heading: msg.heading,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      alt_rel: msg.alt_rel,
      roll: msg.roll,
      pitch: msg.pitch,
      xy_global: msg.xy_global,
      ref_lat: msg.ref_lat,
      ref_lon: msg.ref_lon,
    }
  }
}


// Corresponds to mission_interfaces__msg__MotorStatus
/// Bench motor telemetry (bench_flight_controller with spin_motors:=true), shown on the HUD.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// SERVO_OUTPUT_RAW / RC out channels 1..4
    pub servo_pwm: [u16; 4],

    /// 0..1 commanded collective thrust
    pub thrust: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd_roll_deg: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd_pitch_deg: f32,

}



impl Default for MotorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MotorStatus {
  type RmwMsg = super::msg::rmw::MotorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        servo_pwm: msg.servo_pwm,
        thrust: msg.thrust,
        cmd_roll_deg: msg.cmd_roll_deg,
        cmd_pitch_deg: msg.cmd_pitch_deg,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        servo_pwm: msg.servo_pwm,
      thrust: msg.thrust,
      cmd_roll_deg: msg.cmd_roll_deg,
      cmd_pitch_deg: msg.cmd_pitch_deg,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      servo_pwm: msg.servo_pwm,
      thrust: msg.thrust,
      cmd_roll_deg: msg.cmd_roll_deg,
      cmd_pitch_deg: msg.cmd_pitch_deg,
    }
  }
}


// Corresponds to mission_interfaces__msg__PositionSetpoint
/// Streamed position target for flight_controller (~/setpoint), local NED. Used by target_search to
/// follow the red-zone avoidance carrot point (published at ~20 Hz). Accepted only while GUIDED is
/// engaged and no action goal is running; if the stream stops for 0.5 s the vehicle holds position.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionSetpoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// north, m
    pub x: f32,

    /// east, m
    pub y: f32,

    /// down, m
    pub z: f32,

    /// heading, rad (0 = north, clockwise); NaN = keep the current heading
    pub yaw: f32,

}



impl Default for PositionSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PositionSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for PositionSetpoint {
  type RmwMsg = super::msg::rmw::PositionSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        x: msg.x,
        y: msg.y,
        z: msg.z,
        yaw: msg.yaw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      x: msg.x,
      y: msg.y,
      z: msg.z,
      yaw: msg.yaw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      x: msg.x,
      y: msg.y,
      z: msg.z,
      yaw: msg.yaw,
    }
  }
}


// Corresponds to mission_interfaces__msg__BannerDetection
/// Output of banner_detector for one camera frame (published only while a colour is active).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BannerDetection {
    /// copied from the image
    pub header: std_msgs::msg::Header,

    /// "green" | "blue": the colour searched for in this frame
    pub color: std::string::String,

    /// a banner passed classification in this frame
    pub detected: bool,

    /// "SHAPE" (ratio/fill/full-view + persistence) | "OCR" (AeroTHON + 2026 read)
    pub source: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub text: std::string::String,

    /// px, banner centre (reconstructed along the long axis for a partial OCR view)
    pub u: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v: f32,

    /// TL, TR, BR, BL corners x0,y0,...,x3,y3 in px
    pub quad: [f32; 8],

    /// rad, long-axis angle in the image (x right, y down), [-pi/2, pi/2)
    pub angle: f32,

    /// quad touches the image border
    pub partial: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_width: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_height: u32,

    /// colour regions above min area in this frame
    pub candidates: u16,

    /// shape persistence counter
    pub consecutive_hits: u16,

    /// Drone pose used for this frame (from /flight_controller/pose) and the banner position it gives
    pub pose_valid: bool,

    /// m above take-off
    pub alt_rel: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_heading: f32,

    /// local NED of the banner centre (pinhole reprojection), z = drone_z
    pub position_estimate: geometry_msgs::msg::Point,

}



impl Default for BannerDetection {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BannerDetection::default())
  }
}

impl rosidl_runtime_rs::Message for BannerDetection {
  type RmwMsg = super::msg::rmw::BannerDetection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        color: msg.color.as_str().into(),
        detected: msg.detected,
        source: msg.source.as_str().into(),
        text: msg.text.as_str().into(),
        u: msg.u,
        v: msg.v,
        quad: msg.quad,
        angle: msg.angle,
        partial: msg.partial,
        image_width: msg.image_width,
        image_height: msg.image_height,
        candidates: msg.candidates,
        consecutive_hits: msg.consecutive_hits,
        pose_valid: msg.pose_valid,
        alt_rel: msg.alt_rel,
        drone_x: msg.drone_x,
        drone_y: msg.drone_y,
        drone_z: msg.drone_z,
        drone_heading: msg.drone_heading,
        position_estimate: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position_estimate)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        color: msg.color.as_str().into(),
      detected: msg.detected,
        source: msg.source.as_str().into(),
        text: msg.text.as_str().into(),
      u: msg.u,
      v: msg.v,
        quad: msg.quad,
      angle: msg.angle,
      partial: msg.partial,
      image_width: msg.image_width,
      image_height: msg.image_height,
      candidates: msg.candidates,
      consecutive_hits: msg.consecutive_hits,
      pose_valid: msg.pose_valid,
      alt_rel: msg.alt_rel,
      drone_x: msg.drone_x,
      drone_y: msg.drone_y,
      drone_z: msg.drone_z,
      drone_heading: msg.drone_heading,
        position_estimate: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position_estimate)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      color: msg.color.to_string(),
      detected: msg.detected,
      source: msg.source.to_string(),
      text: msg.text.to_string(),
      u: msg.u,
      v: msg.v,
      quad: msg.quad,
      angle: msg.angle,
      partial: msg.partial,
      image_width: msg.image_width,
      image_height: msg.image_height,
      candidates: msg.candidates,
      consecutive_hits: msg.consecutive_hits,
      pose_valid: msg.pose_valid,
      alt_rel: msg.alt_rel,
      drone_x: msg.drone_x,
      drone_y: msg.drone_y,
      drone_z: msg.drone_z,
      drone_heading: msg.drone_heading,
      position_estimate: geometry_msgs::msg::Point::from_rmw_message(msg.position_estimate),
    }
  }
}


// Corresponds to mission_interfaces__msg__QrDetection
/// Output of qr_detector for one camera frame.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QrDetection {
    /// copied from the image
    pub header: std_msgs::msg::Header,

    /// a QR code was found in this frame
    pub detected: bool,

    /// quad corners x0,y0,...,x3,y3 in px
    pub corners: [f32; 8],

    /// px, centre of the quad
    pub u: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v: f32,

    /// "" if it could not be decoded
    pub decoded_text: std::string::String,

    /// a reference QR has been captured from the camera
    pub reference_ready: bool,

    /// 4-rotation module-grid similarity to the reference, 0..1 (1.0 for a text match)
    pub score: f32,

    /// decoded text equals the reference text, or score >= match_threshold
    pub matched: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub match_threshold: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_width: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_height: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alt_rel: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_heading: f32,

    /// local NED of the QR centre (pinhole reprojection), z = drone_z
    pub position_estimate: geometry_msgs::msg::Point,

}



impl Default for QrDetection {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::QrDetection::default())
  }
}

impl rosidl_runtime_rs::Message for QrDetection {
  type RmwMsg = super::msg::rmw::QrDetection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        detected: msg.detected,
        corners: msg.corners,
        u: msg.u,
        v: msg.v,
        decoded_text: msg.decoded_text.as_str().into(),
        reference_ready: msg.reference_ready,
        score: msg.score,
        matched: msg.matched,
        match_threshold: msg.match_threshold,
        image_width: msg.image_width,
        image_height: msg.image_height,
        pose_valid: msg.pose_valid,
        alt_rel: msg.alt_rel,
        drone_x: msg.drone_x,
        drone_y: msg.drone_y,
        drone_z: msg.drone_z,
        drone_heading: msg.drone_heading,
        position_estimate: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position_estimate)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      detected: msg.detected,
        corners: msg.corners,
      u: msg.u,
      v: msg.v,
        decoded_text: msg.decoded_text.as_str().into(),
      reference_ready: msg.reference_ready,
      score: msg.score,
      matched: msg.matched,
      match_threshold: msg.match_threshold,
      image_width: msg.image_width,
      image_height: msg.image_height,
      pose_valid: msg.pose_valid,
      alt_rel: msg.alt_rel,
      drone_x: msg.drone_x,
      drone_y: msg.drone_y,
      drone_z: msg.drone_z,
      drone_heading: msg.drone_heading,
        position_estimate: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position_estimate)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      detected: msg.detected,
      corners: msg.corners,
      u: msg.u,
      v: msg.v,
      decoded_text: msg.decoded_text.to_string(),
      reference_ready: msg.reference_ready,
      score: msg.score,
      matched: msg.matched,
      match_threshold: msg.match_threshold,
      image_width: msg.image_width,
      image_height: msg.image_height,
      pose_valid: msg.pose_valid,
      alt_rel: msg.alt_rel,
      drone_x: msg.drone_x,
      drone_y: msg.drone_y,
      drone_z: msg.drone_z,
      drone_heading: msg.drone_heading,
      position_estimate: geometry_msgs::msg::Point::from_rmw_message(msg.position_estimate),
    }
  }
}


// Corresponds to mission_interfaces__msg__RedPatch
/// One red patch (candidate red / restricted zone) found in an image.
/// Ported from qr_match_interfaces/RedPatch (Shiva007-RAndom/Qr-and-red-zone-detection).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RedPatch {
    /// Centroid from image moments, in pixels (origin top-left)
    pub centroid_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub centroid_y: f32,

    /// Offset of the centroid from the image centre, normalised to [-1, 1] (+x = right, +y = down)
    pub offset_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub offset_y: f32,

    /// Contour area in pixels^2 and as a fraction of the whole image
    pub area_px: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub area_fraction: f32,

    /// Axis-aligned bounding box in pixels: [x, y, width, height]
    pub bbox_xywh: [i32; 4],

    /// Simplified outline of the patch, pixel coordinates (z unused)
    pub contour: Vec<geometry_msgs::msg::Point32>,

}



impl Default for RedPatch {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RedPatch::default())
  }
}

impl rosidl_runtime_rs::Message for RedPatch {
  type RmwMsg = super::msg::rmw::RedPatch;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        centroid_x: msg.centroid_x,
        centroid_y: msg.centroid_y,
        offset_x: msg.offset_x,
        offset_y: msg.offset_y,
        area_px: msg.area_px,
        area_fraction: msg.area_fraction,
        bbox_xywh: msg.bbox_xywh,
        contour: msg.contour
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point32::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      centroid_x: msg.centroid_x,
      centroid_y: msg.centroid_y,
      offset_x: msg.offset_x,
      offset_y: msg.offset_y,
      area_px: msg.area_px,
      area_fraction: msg.area_fraction,
        bbox_xywh: msg.bbox_xywh,
        contour: msg.contour
          .iter()
          .map(|elem| geometry_msgs::msg::Point32::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      centroid_x: msg.centroid_x,
      centroid_y: msg.centroid_y,
      offset_x: msg.offset_x,
      offset_y: msg.offset_y,
      area_px: msg.area_px,
      area_fraction: msg.area_fraction,
      bbox_xywh: msg.bbox_xywh,
      contour: msg.contour
          .into_iter()
          .map(geometry_msgs::msg::Point32::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mission_interfaces__msg__RedZoneResult
/// Result of red-patch detection on one image (red_zone_detector, /perception/red_zone).
/// Ported from qr_match_interfaces/RedZoneResult (Shiva007-RAndom/Qr-and-red-zone-detection).
/// Published for EVERY processed frame (detected = false too): target_search uses the frames without
/// red to know which ground the camera has looked at.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RedZoneResult {
    /// copied from the image (camera time)
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_width: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_height: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_patches: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_area_fraction: f32,

    /// by descending area
    pub patches: Vec<super::msg::RedPatch>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub processing_time_ms: f32,

}



impl Default for RedZoneResult {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RedZoneResult::default())
  }
}

impl rosidl_runtime_rs::Message for RedZoneResult {
  type RmwMsg = super::msg::rmw::RedZoneResult;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        image_width: msg.image_width,
        image_height: msg.image_height,
        detected: msg.detected,
        num_patches: msg.num_patches,
        total_area_fraction: msg.total_area_fraction,
        patches: msg.patches
          .into_iter()
          .map(|elem| super::msg::RedPatch::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        processing_time_ms: msg.processing_time_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      image_width: msg.image_width,
      image_height: msg.image_height,
      detected: msg.detected,
      num_patches: msg.num_patches,
      total_area_fraction: msg.total_area_fraction,
        patches: msg.patches
          .iter()
          .map(|elem| super::msg::RedPatch::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      processing_time_ms: msg.processing_time_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      image_width: msg.image_width,
      image_height: msg.image_height,
      detected: msg.detected,
      num_patches: msg.num_patches,
      total_area_fraction: msg.total_area_fraction,
      patches: msg.patches
          .into_iter()
          .map(super::msg::RedPatch::from_rmw_message)
          .collect(),
      processing_time_ms: msg.processing_time_ms,
    }
  }
}


// Corresponds to mission_interfaces__msg__RedMap
/// The red seen so far (target_search, /perception/red_map, latched). Grid in the search's zone frame:
///   x_z along `axis_heading` from (origin_north, origin_east), y_z 90 deg to the left of x_z
///   (a rotation of the local NED frame aligned with the delivery zone's long side).
/// Consumers (qr_centering, target_search's SafeGoto) rebuild red_avoidance.RedMap from it.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RedMap {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub origin_north: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub origin_east: f64,

    /// rad, heading of +x_z
    pub axis_heading: f64,

    /// m per cell
    pub cell: f32,

    /// zone-frame coordinates of the grid's corner
    pub grid_x0: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub grid_y0: f32,

    /// cells along x_z
    pub width: u32,

    /// cells along y_z
    pub height: u32,

    /// row-major (row = y index), 1 = red seen
    pub data: Vec<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub version: u32,

    /// keep-out margin the search uses (m)
    pub margin: f32,

}



impl Default for RedMap {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RedMap::default())
  }
}

impl rosidl_runtime_rs::Message for RedMap {
  type RmwMsg = super::msg::rmw::RedMap;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        origin_north: msg.origin_north,
        origin_east: msg.origin_east,
        axis_heading: msg.axis_heading,
        cell: msg.cell,
        grid_x0: msg.grid_x0,
        grid_y0: msg.grid_y0,
        width: msg.width,
        height: msg.height,
        data: msg.data.into(),
        version: msg.version,
        margin: msg.margin,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      origin_north: msg.origin_north,
      origin_east: msg.origin_east,
      axis_heading: msg.axis_heading,
      cell: msg.cell,
      grid_x0: msg.grid_x0,
      grid_y0: msg.grid_y0,
      width: msg.width,
      height: msg.height,
        data: msg.data.as_slice().into(),
      version: msg.version,
      margin: msg.margin,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      origin_north: msg.origin_north,
      origin_east: msg.origin_east,
      axis_heading: msg.axis_heading,
      cell: msg.cell,
      grid_x0: msg.grid_x0,
      grid_y0: msg.grid_y0,
      width: msg.width,
      height: msg.height,
      data: msg.data
          .into_iter()
          .collect(),
      version: msg.version,
      margin: msg.margin,
    }
  }
}


// Corresponds to mission_interfaces__msg__MissionStatus
/// Published by mission_tree every tick (HUD header line and countdown).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// name of the running tree step
    pub stage: std::string::String,

    /// short text for the HUD
    pub state_text: std::string::String,

    /// s left in a timed hold (0 = none)
    pub countdown: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reference_ready: bool,

}



impl Default for MissionStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MissionStatus {
  type RmwMsg = super::msg::rmw::MissionStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        stage: msg.stage.as_str().into(),
        state_text: msg.state_text.as_str().into(),
        countdown: msg.countdown,
        reference_ready: msg.reference_ready,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        stage: msg.stage.as_str().into(),
        state_text: msg.state_text.as_str().into(),
      countdown: msg.countdown,
      reference_ready: msg.reference_ready,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      stage: msg.stage.to_string(),
      state_text: msg.state_text.to_string(),
      countdown: msg.countdown,
      reference_ready: msg.reference_ready,
    }
  }
}


