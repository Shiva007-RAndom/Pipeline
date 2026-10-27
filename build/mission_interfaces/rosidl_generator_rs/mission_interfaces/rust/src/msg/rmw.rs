#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__VehicleState() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__msg__VehicleState__init(msg: *mut VehicleState) -> bool;
    fn mission_interfaces__msg__VehicleState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VehicleState>, size: usize) -> bool;
    fn mission_interfaces__msg__VehicleState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VehicleState>);
    fn mission_interfaces__msg__VehicleState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VehicleState>, out_seq: *mut rosidl_runtime_rs::Sequence<VehicleState>) -> bool;
}

// Corresponds to mission_interfaces__msg__VehicleState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Vehicle state published by flight_controller (MAVROS) or bench_flight_controller on
/// /flight_controller/pose. Every mission node reads the drone pose from here, so the bench
/// controller can stand in for the real one without any other node noticing.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    pub mode: rosidl_runtime_rs::String,

    /// "mavros" | "bench"
    pub controller: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__msg__VehicleState__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__msg__VehicleState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VehicleState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__VehicleState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__VehicleState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__VehicleState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VehicleState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VehicleState where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/msg/VehicleState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__VehicleState() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__MotorStatus() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__msg__MotorStatus__init(msg: *mut MotorStatus) -> bool;
    fn mission_interfaces__msg__MotorStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>, size: usize) -> bool;
    fn mission_interfaces__msg__MotorStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>);
    fn mission_interfaces__msg__MotorStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>) -> bool;
}

// Corresponds to mission_interfaces__msg__MotorStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Bench motor telemetry (bench_flight_controller with spin_motors:=true), shown on the HUD.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__msg__MotorStatus__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__msg__MotorStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__MotorStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__MotorStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__MotorStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorStatus where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/msg/MotorStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__MotorStatus() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__PositionSetpoint() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__msg__PositionSetpoint__init(msg: *mut PositionSetpoint) -> bool;
    fn mission_interfaces__msg__PositionSetpoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PositionSetpoint>, size: usize) -> bool;
    fn mission_interfaces__msg__PositionSetpoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PositionSetpoint>);
    fn mission_interfaces__msg__PositionSetpoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PositionSetpoint>, out_seq: *mut rosidl_runtime_rs::Sequence<PositionSetpoint>) -> bool;
}

// Corresponds to mission_interfaces__msg__PositionSetpoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Streamed position target for flight_controller (~/setpoint), local NED. Used by target_search to
/// follow the red-zone avoidance carrot point (published at ~20 Hz). Accepted only while GUIDED is
/// engaged and no action goal is running; if the stream stops for 0.5 s the vehicle holds position.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionSetpoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__msg__PositionSetpoint__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__msg__PositionSetpoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PositionSetpoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__PositionSetpoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__PositionSetpoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__PositionSetpoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PositionSetpoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PositionSetpoint where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/msg/PositionSetpoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__PositionSetpoint() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__BannerDetection() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__msg__BannerDetection__init(msg: *mut BannerDetection) -> bool;
    fn mission_interfaces__msg__BannerDetection__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BannerDetection>, size: usize) -> bool;
    fn mission_interfaces__msg__BannerDetection__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BannerDetection>);
    fn mission_interfaces__msg__BannerDetection__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BannerDetection>, out_seq: *mut rosidl_runtime_rs::Sequence<BannerDetection>) -> bool;
}

// Corresponds to mission_interfaces__msg__BannerDetection
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Output of banner_detector for one camera frame (published only while a colour is active).

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BannerDetection {
    /// copied from the image
    pub header: std_msgs::msg::rmw::Header,

    /// "green" | "blue": the colour searched for in this frame
    pub color: rosidl_runtime_rs::String,

    /// a banner passed classification in this frame
    pub detected: bool,

    /// "SHAPE" (ratio/fill/full-view + persistence) | "OCR" (AeroTHON + 2026 read)
    pub source: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub text: rosidl_runtime_rs::String,

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
    pub position_estimate: geometry_msgs::msg::rmw::Point,

}



impl Default for BannerDetection {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__msg__BannerDetection__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__msg__BannerDetection__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BannerDetection {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__BannerDetection__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__BannerDetection__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__BannerDetection__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BannerDetection {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BannerDetection where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/msg/BannerDetection";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__BannerDetection() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__QrDetection() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__msg__QrDetection__init(msg: *mut QrDetection) -> bool;
    fn mission_interfaces__msg__QrDetection__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QrDetection>, size: usize) -> bool;
    fn mission_interfaces__msg__QrDetection__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QrDetection>);
    fn mission_interfaces__msg__QrDetection__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QrDetection>, out_seq: *mut rosidl_runtime_rs::Sequence<QrDetection>) -> bool;
}

// Corresponds to mission_interfaces__msg__QrDetection
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Output of qr_detector for one camera frame.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QrDetection {
    /// copied from the image
    pub header: std_msgs::msg::rmw::Header,

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
    pub decoded_text: rosidl_runtime_rs::String,

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
    pub position_estimate: geometry_msgs::msg::rmw::Point,

}



impl Default for QrDetection {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__msg__QrDetection__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__msg__QrDetection__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QrDetection {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__QrDetection__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__QrDetection__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__QrDetection__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QrDetection {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QrDetection where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/msg/QrDetection";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__QrDetection() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__RedPatch() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__msg__RedPatch__init(msg: *mut RedPatch) -> bool;
    fn mission_interfaces__msg__RedPatch__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RedPatch>, size: usize) -> bool;
    fn mission_interfaces__msg__RedPatch__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RedPatch>);
    fn mission_interfaces__msg__RedPatch__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RedPatch>, out_seq: *mut rosidl_runtime_rs::Sequence<RedPatch>) -> bool;
}

// Corresponds to mission_interfaces__msg__RedPatch
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// One red patch (candidate red / restricted zone) found in an image.
/// Ported from qr_match_interfaces/RedPatch (Shiva007-RAndom/Qr-and-red-zone-detection).

#[repr(C)]
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
    pub contour: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point32>,

}



impl Default for RedPatch {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__msg__RedPatch__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__msg__RedPatch__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RedPatch {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__RedPatch__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__RedPatch__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__RedPatch__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RedPatch {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RedPatch where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/msg/RedPatch";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__RedPatch() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__RedZoneResult() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__msg__RedZoneResult__init(msg: *mut RedZoneResult) -> bool;
    fn mission_interfaces__msg__RedZoneResult__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RedZoneResult>, size: usize) -> bool;
    fn mission_interfaces__msg__RedZoneResult__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RedZoneResult>);
    fn mission_interfaces__msg__RedZoneResult__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RedZoneResult>, out_seq: *mut rosidl_runtime_rs::Sequence<RedZoneResult>) -> bool;
}

// Corresponds to mission_interfaces__msg__RedZoneResult
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Result of red-patch detection on one image (red_zone_detector, /perception/red_zone).
/// Ported from qr_match_interfaces/RedZoneResult (Shiva007-RAndom/Qr-and-red-zone-detection).
/// Published for EVERY processed frame (detected = false too): target_search uses the frames without
/// red to know which ground the camera has looked at.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RedZoneResult {
    /// copied from the image (camera time)
    pub header: std_msgs::msg::rmw::Header,


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
    pub patches: rosidl_runtime_rs::Sequence<super::super::msg::rmw::RedPatch>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub processing_time_ms: f32,

}



impl Default for RedZoneResult {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__msg__RedZoneResult__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__msg__RedZoneResult__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RedZoneResult {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__RedZoneResult__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__RedZoneResult__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__RedZoneResult__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RedZoneResult {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RedZoneResult where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/msg/RedZoneResult";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__RedZoneResult() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__RedMap() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__msg__RedMap__init(msg: *mut RedMap) -> bool;
    fn mission_interfaces__msg__RedMap__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RedMap>, size: usize) -> bool;
    fn mission_interfaces__msg__RedMap__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RedMap>);
    fn mission_interfaces__msg__RedMap__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RedMap>, out_seq: *mut rosidl_runtime_rs::Sequence<RedMap>) -> bool;
}

// Corresponds to mission_interfaces__msg__RedMap
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The red seen so far (target_search, /perception/red_map, latched). Grid in the search's zone frame:
///   x_z along `axis_heading` from (origin_north, origin_east), y_z 90 deg to the left of x_z
///   (a rotation of the local NED frame aligned with the delivery zone's long side).
/// Consumers (qr_centering, target_search's SafeGoto) rebuild red_avoidance.RedMap from it.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RedMap {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    pub data: rosidl_runtime_rs::Sequence<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub version: u32,

    /// keep-out margin the search uses (m)
    pub margin: f32,

}



impl Default for RedMap {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__msg__RedMap__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__msg__RedMap__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RedMap {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__RedMap__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__RedMap__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__RedMap__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RedMap {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RedMap where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/msg/RedMap";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__RedMap() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__MissionStatus() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__msg__MissionStatus__init(msg: *mut MissionStatus) -> bool;
    fn mission_interfaces__msg__MissionStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MissionStatus>, size: usize) -> bool;
    fn mission_interfaces__msg__MissionStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MissionStatus>);
    fn mission_interfaces__msg__MissionStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MissionStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MissionStatus>) -> bool;
}

// Corresponds to mission_interfaces__msg__MissionStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Published by mission_tree every tick (HUD header line and countdown).

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// name of the running tree step
    pub stage: rosidl_runtime_rs::String,

    /// short text for the HUD
    pub state_text: rosidl_runtime_rs::String,

    /// s left in a timed hold (0 = none)
    pub countdown: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reference_ready: bool,

}



impl Default for MissionStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__msg__MissionStatus__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__msg__MissionStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MissionStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__MissionStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__MissionStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__msg__MissionStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MissionStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MissionStatus where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/msg/MissionStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__msg__MissionStatus() }
  }
}


