
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Takeoff_Goal__init(msg: *mut Takeoff_Goal) -> bool;
    fn mission_interfaces__action__Takeoff_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__Takeoff_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_Goal>);
    fn mission_interfaces__action__Takeoff_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Takeoff_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Takeoff_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__Takeoff_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_Goal {
    /// m to climb above the current altitude
    pub altitude: f32,

}



impl Default for Takeoff_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Takeoff_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Takeoff_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Takeoff_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Takeoff_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Takeoff_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Takeoff_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Takeoff_Result__init(msg: *mut Takeoff_Result) -> bool;
    fn mission_interfaces__action__Takeoff_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_Result>, size: usize) -> bool;
    fn mission_interfaces__action__Takeoff_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_Result>);
    fn mission_interfaces__action__Takeoff_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Takeoff_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Takeoff_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__Takeoff_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for Takeoff_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Takeoff_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Takeoff_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Takeoff_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Takeoff_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Takeoff_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Takeoff_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Takeoff_Feedback__init(msg: *mut Takeoff_Feedback) -> bool;
    fn mission_interfaces__action__Takeoff_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__Takeoff_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_Feedback>);
    fn mission_interfaces__action__Takeoff_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Takeoff_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Takeoff_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__Takeoff_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_Feedback {
    /// m
    pub altitude_remaining: f32,

}



impl Default for Takeoff_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Takeoff_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Takeoff_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Takeoff_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Takeoff_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Takeoff_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Takeoff_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Takeoff_FeedbackMessage__init(msg: *mut Takeoff_FeedbackMessage) -> bool;
    fn mission_interfaces__action__Takeoff_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__Takeoff_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_FeedbackMessage>);
    fn mission_interfaces__action__Takeoff_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Takeoff_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Takeoff_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__Takeoff_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Takeoff_Feedback,

}



impl Default for Takeoff_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Takeoff_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Takeoff_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Takeoff_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Takeoff_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Takeoff_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Takeoff_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_FeedbackMessage() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__GoTo_Goal__init(msg: *mut GoTo_Goal) -> bool;
    fn mission_interfaces__action__GoTo_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoTo_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__GoTo_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoTo_Goal>);
    fn mission_interfaces__action__GoTo_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoTo_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<GoTo_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__GoTo_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub frame: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,

    /// LOCAL_NED: absolute heading (rad, 0 = north, clockwise +)
    /// BODY_FLU: heading change (rad, counter-clockwise +); NaN = keep current
    pub yaw: f32,

    /// m/s; <= 0 uses the controller default
    pub speed: f32,

    /// m; <= 0 uses the controller default
    pub acceptance_radius: f32,

}

impl GoTo_Goal {
    /// x north, y east, z down (m), same frame as flight_controller's LocalPose (EKF origin)
    /// NaN x/y/z = keep current (e.g. x=y=NaN, z=-10: climb to 10 m above origin)
    pub const FRAME_LOCAL_NED: u8 = 0;

    /// offset from the current pose: x forward, y left, z up (m)
    pub const FRAME_BODY_FLU: u8 = 1;

}


impl Default for GoTo_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__GoTo_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__GoTo_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoTo_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoTo_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoTo_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/GoTo_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__GoTo_Result__init(msg: *mut GoTo_Result) -> bool;
    fn mission_interfaces__action__GoTo_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoTo_Result>, size: usize) -> bool;
    fn mission_interfaces__action__GoTo_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoTo_Result>);
    fn mission_interfaces__action__GoTo_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoTo_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<GoTo_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__GoTo_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// local NED
    pub final_position: geometry_msgs::msg::rmw::Point,

}



impl Default for GoTo_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__GoTo_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__GoTo_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoTo_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoTo_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoTo_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/GoTo_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__GoTo_Feedback__init(msg: *mut GoTo_Feedback) -> bool;
    fn mission_interfaces__action__GoTo_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoTo_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__GoTo_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoTo_Feedback>);
    fn mission_interfaces__action__GoTo_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoTo_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<GoTo_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__GoTo_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_Feedback {
    /// m
    pub distance_remaining: f32,

}



impl Default for GoTo_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__GoTo_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__GoTo_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoTo_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoTo_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoTo_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/GoTo_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__GoTo_FeedbackMessage__init(msg: *mut GoTo_FeedbackMessage) -> bool;
    fn mission_interfaces__action__GoTo_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoTo_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__GoTo_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoTo_FeedbackMessage>);
    fn mission_interfaces__action__GoTo_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoTo_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<GoTo_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__GoTo_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::GoTo_Feedback,

}



impl Default for GoTo_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__GoTo_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__GoTo_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoTo_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoTo_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoTo_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/GoTo_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_FeedbackMessage() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Land_Goal__init(msg: *mut Land_Goal) -> bool;
    fn mission_interfaces__action__Land_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Land_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__Land_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Land_Goal>);
    fn mission_interfaces__action__Land_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Land_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Land_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__Land_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Land_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Land_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Land_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Land_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Land_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Land_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Land_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Land_Result__init(msg: *mut Land_Result) -> bool;
    fn mission_interfaces__action__Land_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Land_Result>, size: usize) -> bool;
    fn mission_interfaces__action__Land_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Land_Result>);
    fn mission_interfaces__action__Land_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Land_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Land_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__Land_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for Land_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Land_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Land_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Land_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Land_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Land_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Land_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Land_Feedback__init(msg: *mut Land_Feedback) -> bool;
    fn mission_interfaces__action__Land_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Land_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__Land_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Land_Feedback>);
    fn mission_interfaces__action__Land_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Land_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Land_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__Land_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_Feedback {
    /// m above the local origin
    pub altitude: f32,

}



impl Default for Land_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Land_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Land_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Land_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Land_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Land_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Land_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Land_FeedbackMessage__init(msg: *mut Land_FeedbackMessage) -> bool;
    fn mission_interfaces__action__Land_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Land_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__Land_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Land_FeedbackMessage>);
    fn mission_interfaces__action__Land_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Land_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Land_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__Land_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Land_Feedback,

}



impl Default for Land_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Land_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Land_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Land_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Land_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Land_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Land_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_FeedbackMessage() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CaptureReference_Goal__init(msg: *mut CaptureReference_Goal) -> bool;
    fn mission_interfaces__action__CaptureReference_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__CaptureReference_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_Goal>);
    fn mission_interfaces__action__CaptureReference_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureReference_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__CaptureReference_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for CaptureReference_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CaptureReference_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CaptureReference_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureReference_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureReference_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CaptureReference_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CaptureReference_Result__init(msg: *mut CaptureReference_Result) -> bool;
    fn mission_interfaces__action__CaptureReference_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_Result>, size: usize) -> bool;
    fn mission_interfaces__action__CaptureReference_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_Result>);
    fn mission_interfaces__action__CaptureReference_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureReference_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__CaptureReference_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// saved warp of the captured QR ("" if saving failed)
    pub image_path: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub decoded_text: rosidl_runtime_rs::String,

}



impl Default for CaptureReference_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CaptureReference_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CaptureReference_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureReference_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureReference_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CaptureReference_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CaptureReference_Feedback__init(msg: *mut CaptureReference_Feedback) -> bool;
    fn mission_interfaces__action__CaptureReference_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__CaptureReference_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_Feedback>);
    fn mission_interfaces__action__CaptureReference_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureReference_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__CaptureReference_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_Feedback {
    /// s since the goal started
    pub elapsed: f32,

}



impl Default for CaptureReference_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CaptureReference_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CaptureReference_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureReference_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureReference_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CaptureReference_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CaptureReference_FeedbackMessage__init(msg: *mut CaptureReference_FeedbackMessage) -> bool;
    fn mission_interfaces__action__CaptureReference_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__CaptureReference_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_FeedbackMessage>);
    fn mission_interfaces__action__CaptureReference_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureReference_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__CaptureReference_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::CaptureReference_Feedback,

}



impl Default for CaptureReference_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CaptureReference_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CaptureReference_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureReference_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureReference_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CaptureReference_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_FeedbackMessage() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchBanner_Goal__init(msg: *mut SearchBanner_Goal) -> bool;
    fn mission_interfaces__action__SearchBanner_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__SearchBanner_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_Goal>);
    fn mission_interfaces__action__SearchBanner_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchBanner_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchBanner_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_Goal {
    /// "green" | "blue"
    pub color: rosidl_runtime_rs::String,

    /// local NED
    pub waypoints: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,

    /// heading held during the search (rad, 0 = north, clockwise)
    pub yaw: f32,

    /// m/s; <= 0 uses the flight controller default
    pub speed: f32,

    /// s to hover and look at waypoint i (missing entries = 0)
    pub dwell: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detect_while_moving: bool,

}



impl Default for SearchBanner_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchBanner_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchBanner_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchBanner_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchBanner_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchBanner_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchBanner_Result__init(msg: *mut SearchBanner_Result) -> bool;
    fn mission_interfaces__action__SearchBanner_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_Result>, size: usize) -> bool;
    fn mission_interfaces__action__SearchBanner_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_Result>);
    fn mission_interfaces__action__SearchBanner_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchBanner_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchBanner_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_Result {
    /// true = banner classified
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// local NED of the banner centre at detection time
    pub banner_estimate: geometry_msgs::msg::rmw::Point,

    /// drone position when it was classified
    pub drone_position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoint_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: rosidl_runtime_rs::String,

}



impl Default for SearchBanner_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchBanner_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchBanner_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchBanner_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchBanner_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchBanner_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchBanner_Feedback__init(msg: *mut SearchBanner_Feedback) -> bool;
    fn mission_interfaces__action__SearchBanner_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__SearchBanner_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_Feedback>);
    fn mission_interfaces__action__SearchBanner_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchBanner_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchBanner_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoint: u32,

}



impl Default for SearchBanner_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchBanner_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchBanner_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchBanner_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchBanner_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchBanner_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchBanner_FeedbackMessage__init(msg: *mut SearchBanner_FeedbackMessage) -> bool;
    fn mission_interfaces__action__SearchBanner_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__SearchBanner_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_FeedbackMessage>);
    fn mission_interfaces__action__SearchBanner_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchBanner_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchBanner_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::SearchBanner_Feedback,

}



impl Default for SearchBanner_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchBanner_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchBanner_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchBanner_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchBanner_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchBanner_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_FeedbackMessage() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__AlignBanner_Goal__init(msg: *mut AlignBanner_Goal) -> bool;
    fn mission_interfaces__action__AlignBanner_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__AlignBanner_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_Goal>);
    fn mission_interfaces__action__AlignBanner_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AlignBanner_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__AlignBanner_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub color: rosidl_runtime_rs::String,

    /// local NED to fly to first (from SearchBanner); z = altitude to hold
    pub initial_target: geometry_msgs::msg::rmw::Point,

    /// rad; the 180 deg ambiguity is resolved towards it
    pub expected_heading: f32,

    /// rad; candidates further than this from expected are rejected (<= 0: 25 deg)
    pub max_heading_correction: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_iters: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tol_px: f32,

    /// fraction of the measured offset applied per iteration
    pub gain: f32,

    /// s to wait after each correction
    pub settle_time: f32,

}



impl Default for AlignBanner_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__AlignBanner_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__AlignBanner_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AlignBanner_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AlignBanner_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/AlignBanner_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__AlignBanner_Result__init(msg: *mut AlignBanner_Result) -> bool;
    fn mission_interfaces__action__AlignBanner_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_Result>, size: usize) -> bool;
    fn mission_interfaces__action__AlignBanner_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_Result>);
    fn mission_interfaces__action__AlignBanner_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AlignBanner_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__AlignBanner_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_Result {
    /// false only if cancelled or the flight controller failed
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// centred within tol_px with the banner fully in view
    pub locked: bool,

    /// at least one heading candidate was accepted
    pub heading_measured: bool,

    /// last accepted candidate, else expected_heading
    pub corridor_heading: f32,

    /// final servo target (local NED)
    pub banner_position: geometry_msgs::msg::rmw::Point,

}



impl Default for AlignBanner_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__AlignBanner_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__AlignBanner_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AlignBanner_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AlignBanner_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/AlignBanner_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__AlignBanner_Feedback__init(msg: *mut AlignBanner_Feedback) -> bool;
    fn mission_interfaces__action__AlignBanner_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__AlignBanner_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_Feedback>);
    fn mission_interfaces__action__AlignBanner_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AlignBanner_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__AlignBanner_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub iteration: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_px: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub partial: bool,

}



impl Default for AlignBanner_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__AlignBanner_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__AlignBanner_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AlignBanner_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AlignBanner_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/AlignBanner_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__AlignBanner_FeedbackMessage__init(msg: *mut AlignBanner_FeedbackMessage) -> bool;
    fn mission_interfaces__action__AlignBanner_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__AlignBanner_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_FeedbackMessage>);
    fn mission_interfaces__action__AlignBanner_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AlignBanner_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__AlignBanner_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::AlignBanner_Feedback,

}



impl Default for AlignBanner_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__AlignBanner_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__AlignBanner_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AlignBanner_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AlignBanner_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/AlignBanner_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_FeedbackMessage() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__TraverseCorridor_Goal__init(msg: *mut TraverseCorridor_Goal) -> bool;
    fn mission_interfaces__action__TraverseCorridor_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__TraverseCorridor_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_Goal>);
    fn mission_interfaces__action__TraverseCorridor_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TraverseCorridor_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__TraverseCorridor_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_Goal {
    /// local NED x, y of the corridor entrance (banner); z ignored
    pub entry: geometry_msgs::msg::rmw::Point,

    /// rad
    pub heading: f32,

    /// local NED z inside the corridor (negative = above origin)
    pub altitude_z: f32,

    /// m
    pub length: f32,

    /// m/s for the surge
    pub speed: f32,

    /// s hover after the descent
    pub settle_time: f32,

    /// local NED z to climb to vertically at the exit; NaN = stay at corridor altitude
    pub exit_altitude_z: f32,

}



impl Default for TraverseCorridor_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__TraverseCorridor_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__TraverseCorridor_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TraverseCorridor_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TraverseCorridor_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/TraverseCorridor_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__TraverseCorridor_Result__init(msg: *mut TraverseCorridor_Result) -> bool;
    fn mission_interfaces__action__TraverseCorridor_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_Result>, size: usize) -> bool;
    fn mission_interfaces__action__TraverseCorridor_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_Result>);
    fn mission_interfaces__action__TraverseCorridor_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TraverseCorridor_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__TraverseCorridor_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// where the vehicle is when the action ends (after the climb)
    pub exit_position: geometry_msgs::msg::rmw::Point,

}



impl Default for TraverseCorridor_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__TraverseCorridor_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__TraverseCorridor_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TraverseCorridor_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TraverseCorridor_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/TraverseCorridor_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__TraverseCorridor_Feedback__init(msg: *mut TraverseCorridor_Feedback) -> bool;
    fn mission_interfaces__action__TraverseCorridor_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__TraverseCorridor_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_Feedback>);
    fn mission_interfaces__action__TraverseCorridor_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TraverseCorridor_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__TraverseCorridor_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_Feedback {
    /// descending | settling | surging | climbing
    pub state: rosidl_runtime_rs::String,

}



impl Default for TraverseCorridor_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__TraverseCorridor_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__TraverseCorridor_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TraverseCorridor_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TraverseCorridor_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/TraverseCorridor_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__TraverseCorridor_FeedbackMessage__init(msg: *mut TraverseCorridor_FeedbackMessage) -> bool;
    fn mission_interfaces__action__TraverseCorridor_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__TraverseCorridor_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_FeedbackMessage>);
    fn mission_interfaces__action__TraverseCorridor_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TraverseCorridor_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__TraverseCorridor_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::TraverseCorridor_Feedback,

}



impl Default for TraverseCorridor_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__TraverseCorridor_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__TraverseCorridor_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TraverseCorridor_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TraverseCorridor_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/TraverseCorridor_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_FeedbackMessage() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchTarget_Goal__init(msg: *mut SearchTarget_Goal) -> bool;
    fn mission_interfaces__action__SearchTarget_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__SearchTarget_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_Goal>);
    fn mission_interfaces__action__SearchTarget_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchTarget_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchTarget_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_Goal {
    /// text file, one "lat,lon" corner of the delivery zone per line
    pub geofence_file: rosidl_runtime_rs::String,

    /// m above the take-off point
    pub altitude: f32,

    /// heading held during the search (rad); NaN = "wide ahead": the camera's long
    /// image side along the rows, so red is seen further ahead
    pub yaw: f32,

    /// m the flight area is shrunk inwards from the geofence rectangle
    pub wall_margin: f32,

    /// overlap of neighbouring rows' footprints, 0..1
    pub overlap: f32,

    /// 0 = as many as it takes to cover the zone
    pub rows: u8,

    /// m/s
    pub speed: f32,

    /// m kept from any red
    pub red_zone_margin: f32,

    /// matched detections of the same QR needed (repo: 2)
    pub confirm_matches: u8,

    /// fly over ground the camera missed (e.g. skipped by a detour); 0 = off
    pub max_revisits: u16,

    /// s budget for the revisits
    pub revisit_time: f32,

    /// true: stop after choosing the QR and report it (target_navigator flies there);
    /// false: fly to it round the red before reporting (as before)
    pub skip_fly_to_target: bool,

}



impl Default for SearchTarget_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchTarget_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchTarget_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchTarget_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchTarget_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchTarget_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchTarget_Result__init(msg: *mut SearchTarget_Result) -> bool;
    fn mission_interfaces__action__SearchTarget_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_Result>, size: usize) -> bool;
    fn mission_interfaces__action__SearchTarget_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_Result>);
    fn mission_interfaces__action__SearchTarget_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchTarget_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchTarget_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// true = matched QR; false = best candidate
    pub matched: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub score: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub decoded_text: rosidl_runtime_rs::String,

    /// local NED of the chosen QR (z = the search altitude's NED z)
    pub target: geometry_msgs::msg::rmw::Point,

    /// the chosen QR's lat/lon (from the local frame's origin), for target_navigator
    pub latitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitude: f64,

    /// separate red patches in the map
    pub red_zones: u16,

    /// fraction of the flight area the camera has looked at
    pub coverage: f32,

}



impl Default for SearchTarget_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchTarget_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchTarget_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchTarget_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchTarget_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchTarget_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchTarget_Feedback__init(msg: *mut SearchTarget_Feedback) -> bool;
    fn mission_interfaces__action__SearchTarget_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__SearchTarget_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_Feedback>);
    fn mission_interfaces__action__SearchTarget_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchTarget_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchTarget_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,

    /// direct | detour | escape | blocked
    pub steering: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub best_score: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub red_zones: u16,

}



impl Default for SearchTarget_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchTarget_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchTarget_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchTarget_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchTarget_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchTarget_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchTarget_FeedbackMessage__init(msg: *mut SearchTarget_FeedbackMessage) -> bool;
    fn mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_FeedbackMessage>);
    fn mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchTarget_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchTarget_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::SearchTarget_Feedback,

}



impl Default for SearchTarget_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchTarget_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchTarget_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchTarget_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchTarget_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchTarget_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_FeedbackMessage() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SafeGoto_Goal__init(msg: *mut SafeGoto_Goal) -> bool;
    fn mission_interfaces__action__SafeGoto_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__SafeGoto_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_Goal>);
    fn mission_interfaces__action__SafeGoto_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SafeGoto_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__SafeGoto_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_Goal {
    /// local NED
    pub target: geometry_msgs::msg::rmw::Point,

    /// rad; NaN = keep
    pub yaw: f32,

    /// m/s; <= 0 = default
    pub speed: f32,

}



impl Default for SafeGoto_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SafeGoto_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SafeGoto_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SafeGoto_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SafeGoto_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SafeGoto_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SafeGoto_Result__init(msg: *mut SafeGoto_Result) -> bool;
    fn mission_interfaces__action__SafeGoto_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_Result>, size: usize) -> bool;
    fn mission_interfaces__action__SafeGoto_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_Result>);
    fn mission_interfaces__action__SafeGoto_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SafeGoto_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__SafeGoto_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detoured: bool,

}



impl Default for SafeGoto_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SafeGoto_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SafeGoto_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SafeGoto_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SafeGoto_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SafeGoto_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SafeGoto_Feedback__init(msg: *mut SafeGoto_Feedback) -> bool;
    fn mission_interfaces__action__SafeGoto_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__SafeGoto_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_Feedback>);
    fn mission_interfaces__action__SafeGoto_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SafeGoto_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__SafeGoto_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub steering: rosidl_runtime_rs::String,

}



impl Default for SafeGoto_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SafeGoto_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SafeGoto_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SafeGoto_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SafeGoto_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SafeGoto_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SafeGoto_FeedbackMessage__init(msg: *mut SafeGoto_FeedbackMessage) -> bool;
    fn mission_interfaces__action__SafeGoto_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__SafeGoto_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_FeedbackMessage>);
    fn mission_interfaces__action__SafeGoto_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SafeGoto_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__SafeGoto_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::SafeGoto_Feedback,

}



impl Default for SafeGoto_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SafeGoto_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SafeGoto_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SafeGoto_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SafeGoto_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SafeGoto_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_FeedbackMessage() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__LawnmowerSearch_Goal__init(msg: *mut LawnmowerSearch_Goal) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_Goal>);
    fn mission_interfaces__action__LawnmowerSearch_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LawnmowerSearch_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__LawnmowerSearch_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_Goal {
    /// local NED of the first row's start; z = search altitude (NED z)
    pub start: geometry_msgs::msg::rmw::Point,

    /// rad, rows run along this heading
    pub heading: f32,

    /// m per row
    pub length: f32,

    /// m between rows, stepping to the RIGHT of `heading`
    pub row_step: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rows: u8,

    /// m/s; <= 0 = flight controller default
    pub speed: f32,

    /// m; <= 0 = flight controller default
    pub waypoint_tolerance: f32,

}



impl Default for LawnmowerSearch_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__LawnmowerSearch_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__LawnmowerSearch_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LawnmowerSearch_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LawnmowerSearch_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/LawnmowerSearch_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__LawnmowerSearch_Result__init(msg: *mut LawnmowerSearch_Result) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_Result>, size: usize) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_Result>);
    fn mission_interfaces__action__LawnmowerSearch_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LawnmowerSearch_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__LawnmowerSearch_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_Result {
    /// true = matched QR found
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// local NED of the matched QR centre, z = start.z
    pub target: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub decoded_text: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub score: f32,

}



impl Default for LawnmowerSearch_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__LawnmowerSearch_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__LawnmowerSearch_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LawnmowerSearch_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LawnmowerSearch_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/LawnmowerSearch_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__LawnmowerSearch_Feedback__init(msg: *mut LawnmowerSearch_Feedback) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_Feedback>);
    fn mission_interfaces__action__LawnmowerSearch_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LawnmowerSearch_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__LawnmowerSearch_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoint: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,

}



impl Default for LawnmowerSearch_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__LawnmowerSearch_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__LawnmowerSearch_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LawnmowerSearch_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LawnmowerSearch_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/LawnmowerSearch_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__LawnmowerSearch_FeedbackMessage__init(msg: *mut LawnmowerSearch_FeedbackMessage) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_FeedbackMessage>);
    fn mission_interfaces__action__LawnmowerSearch_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LawnmowerSearch_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__LawnmowerSearch_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::LawnmowerSearch_Feedback,

}



impl Default for LawnmowerSearch_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__LawnmowerSearch_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__LawnmowerSearch_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LawnmowerSearch_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LawnmowerSearch_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/LawnmowerSearch_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_FeedbackMessage() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CenterOnQr_Goal__init(msg: *mut CenterOnQr_Goal) -> bool;
    fn mission_interfaces__action__CenterOnQr_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__CenterOnQr_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_Goal>);
    fn mission_interfaces__action__CenterOnQr_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CenterOnQr_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__CenterOnQr_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_Goal {
    /// local NED
    pub target: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_iters: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tol_px: f32,

    /// fraction of the measured offset applied per centring iteration
    pub gain: f32,

    /// m for the first GoTo
    pub approach_tolerance: f32,

    /// s hover hold after centring; 0 = no hold
    pub hold_time: f32,

    /// fraction of the measured offset applied per hold nudge
    pub hold_gain: f32,

    /// true = centre on any QR in view (target_search's best candidate, no match)
    pub any_qr: bool,

}



impl Default for CenterOnQr_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CenterOnQr_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CenterOnQr_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CenterOnQr_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CenterOnQr_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CenterOnQr_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CenterOnQr_Result__init(msg: *mut CenterOnQr_Result) -> bool;
    fn mission_interfaces__action__CenterOnQr_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_Result>, size: usize) -> bool;
    fn mission_interfaces__action__CenterOnQr_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_Result>);
    fn mission_interfaces__action__CenterOnQr_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CenterOnQr_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__CenterOnQr_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_Result {
    /// true = the hold was completed (centred or not)
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// centred within tol_px
    pub locked: bool,

    /// final setpoint
    pub position: geometry_msgs::msg::rmw::Point,

}



impl Default for CenterOnQr_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CenterOnQr_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CenterOnQr_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CenterOnQr_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CenterOnQr_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CenterOnQr_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CenterOnQr_Feedback__init(msg: *mut CenterOnQr_Feedback) -> bool;
    fn mission_interfaces__action__CenterOnQr_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__CenterOnQr_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_Feedback>);
    fn mission_interfaces__action__CenterOnQr_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CenterOnQr_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__CenterOnQr_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub iteration: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_px: f32,

    /// s left in the hold (0 while centring)
    pub hold_remaining: f32,

}



impl Default for CenterOnQr_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CenterOnQr_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CenterOnQr_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CenterOnQr_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CenterOnQr_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CenterOnQr_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CenterOnQr_FeedbackMessage__init(msg: *mut CenterOnQr_FeedbackMessage) -> bool;
    fn mission_interfaces__action__CenterOnQr_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__CenterOnQr_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_FeedbackMessage>);
    fn mission_interfaces__action__CenterOnQr_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CenterOnQr_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__CenterOnQr_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::CenterOnQr_Feedback,

}



impl Default for CenterOnQr_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CenterOnQr_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CenterOnQr_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CenterOnQr_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CenterOnQr_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CenterOnQr_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_FeedbackMessage() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__NavigateToTarget_Goal__init(msg: *mut NavigateToTarget_Goal) -> bool;
    fn mission_interfaces__action__NavigateToTarget_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__NavigateToTarget_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_Goal>);
    fn mission_interfaces__action__NavigateToTarget_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToTarget_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__NavigateToTarget_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub latitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitude: f64,

    /// local NED z to fly at (the search altitude)
    pub z: f32,

    /// rad; NaN = keep
    pub yaw: f32,

    /// m/s; <= 0 = default
    pub speed: f32,

    /// m, arrival check; <= 0 = node parameter (1.0)
    pub tolerance: f32,

}



impl Default for NavigateToTarget_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__NavigateToTarget_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__NavigateToTarget_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToTarget_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToTarget_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/NavigateToTarget_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__NavigateToTarget_Result__init(msg: *mut NavigateToTarget_Result) -> bool;
    fn mission_interfaces__action__NavigateToTarget_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_Result>, size: usize) -> bool;
    fn mission_interfaces__action__NavigateToTarget_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_Result>);
    fn mission_interfaces__action__NavigateToTarget_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToTarget_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__NavigateToTarget_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// the waypoint in local NED
    pub target: geometry_msgs::msg::rmw::Point,

    /// vehicle position on arrival
    pub position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detoured: bool,

}



impl Default for NavigateToTarget_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__NavigateToTarget_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__NavigateToTarget_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToTarget_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToTarget_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/NavigateToTarget_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__NavigateToTarget_Feedback__init(msg: *mut NavigateToTarget_Feedback) -> bool;
    fn mission_interfaces__action__NavigateToTarget_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__NavigateToTarget_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_Feedback>);
    fn mission_interfaces__action__NavigateToTarget_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToTarget_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__NavigateToTarget_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,

    /// m to the waypoint
    pub distance: f32,

}



impl Default for NavigateToTarget_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__NavigateToTarget_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__NavigateToTarget_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToTarget_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToTarget_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/NavigateToTarget_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__NavigateToTarget_FeedbackMessage__init(msg: *mut NavigateToTarget_FeedbackMessage) -> bool;
    fn mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_FeedbackMessage>);
    fn mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToTarget_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__NavigateToTarget_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::NavigateToTarget_Feedback,

}



impl Default for NavigateToTarget_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__NavigateToTarget_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__NavigateToTarget_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToTarget_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToTarget_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/NavigateToTarget_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_FeedbackMessage() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__PayloadDrop_Goal__init(msg: *mut PayloadDrop_Goal) -> bool;
    fn mission_interfaces__action__PayloadDrop_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_Goal>, size: usize) -> bool;
    fn mission_interfaces__action__PayloadDrop_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_Goal>);
    fn mission_interfaces__action__PayloadDrop_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PayloadDrop_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_Goal>) -> bool;
}

// Corresponds to mission_interfaces__action__PayloadDrop_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_Goal {
    /// SERVOn output (Cube Orange: 9 = AUX1)
    pub channel: u8,

    /// us, releases the payload
    pub open_pwm: u16,

    /// us, back to the closed / reset position
    pub close_pwm: u16,

    /// s between the two commands
    pub interval: f32,

}



impl Default for PayloadDrop_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__PayloadDrop_Goal__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__PayloadDrop_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PayloadDrop_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PayloadDrop_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/PayloadDrop_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_Goal() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_Result() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__PayloadDrop_Result__init(msg: *mut PayloadDrop_Result) -> bool;
    fn mission_interfaces__action__PayloadDrop_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_Result>, size: usize) -> bool;
    fn mission_interfaces__action__PayloadDrop_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_Result>);
    fn mission_interfaces__action__PayloadDrop_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PayloadDrop_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_Result>) -> bool;
}

// Corresponds to mission_interfaces__action__PayloadDrop_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub payloads_delivered: u16,

}



impl Default for PayloadDrop_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__PayloadDrop_Result__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__PayloadDrop_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PayloadDrop_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PayloadDrop_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/PayloadDrop_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_Result() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__PayloadDrop_Feedback__init(msg: *mut PayloadDrop_Feedback) -> bool;
    fn mission_interfaces__action__PayloadDrop_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_Feedback>, size: usize) -> bool;
    fn mission_interfaces__action__PayloadDrop_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_Feedback>);
    fn mission_interfaces__action__PayloadDrop_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PayloadDrop_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_Feedback>) -> bool;
}

// Corresponds to mission_interfaces__action__PayloadDrop_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,

}



impl Default for PayloadDrop_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__PayloadDrop_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__PayloadDrop_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PayloadDrop_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PayloadDrop_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/PayloadDrop_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_Feedback() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__PayloadDrop_FeedbackMessage__init(msg: *mut PayloadDrop_FeedbackMessage) -> bool;
    fn mission_interfaces__action__PayloadDrop_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_FeedbackMessage>, size: usize) -> bool;
    fn mission_interfaces__action__PayloadDrop_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_FeedbackMessage>);
    fn mission_interfaces__action__PayloadDrop_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PayloadDrop_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_FeedbackMessage>) -> bool;
}

// Corresponds to mission_interfaces__action__PayloadDrop_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::PayloadDrop_Feedback,

}



impl Default for PayloadDrop_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__PayloadDrop_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__PayloadDrop_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PayloadDrop_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PayloadDrop_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/PayloadDrop_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_FeedbackMessage() }
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Takeoff_SendGoal_Request__init(msg: *mut Takeoff_SendGoal_Request) -> bool;
    fn mission_interfaces__action__Takeoff_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__Takeoff_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_SendGoal_Request>);
    fn mission_interfaces__action__Takeoff_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Takeoff_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Takeoff_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__Takeoff_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Takeoff_Goal,

}



impl Default for Takeoff_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Takeoff_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Takeoff_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Takeoff_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Takeoff_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Takeoff_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Takeoff_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Takeoff_SendGoal_Response__init(msg: *mut Takeoff_SendGoal_Response) -> bool;
    fn mission_interfaces__action__Takeoff_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__Takeoff_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_SendGoal_Response>);
    fn mission_interfaces__action__Takeoff_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Takeoff_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Takeoff_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__Takeoff_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Takeoff_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Takeoff_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Takeoff_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Takeoff_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Takeoff_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Takeoff_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Takeoff_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Takeoff_GetResult_Request__init(msg: *mut Takeoff_GetResult_Request) -> bool;
    fn mission_interfaces__action__Takeoff_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__Takeoff_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_GetResult_Request>);
    fn mission_interfaces__action__Takeoff_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Takeoff_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Takeoff_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__Takeoff_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Takeoff_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Takeoff_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Takeoff_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Takeoff_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Takeoff_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Takeoff_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Takeoff_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Takeoff_GetResult_Response__init(msg: *mut Takeoff_GetResult_Response) -> bool;
    fn mission_interfaces__action__Takeoff_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__Takeoff_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Takeoff_GetResult_Response>);
    fn mission_interfaces__action__Takeoff_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Takeoff_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Takeoff_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__Takeoff_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Takeoff_Result,

}



impl Default for Takeoff_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Takeoff_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Takeoff_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Takeoff_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Takeoff_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Takeoff_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Takeoff_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Takeoff_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Takeoff_GetResult_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__GoTo_SendGoal_Request__init(msg: *mut GoTo_SendGoal_Request) -> bool;
    fn mission_interfaces__action__GoTo_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoTo_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__GoTo_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoTo_SendGoal_Request>);
    fn mission_interfaces__action__GoTo_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoTo_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GoTo_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__GoTo_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::GoTo_Goal,

}



impl Default for GoTo_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__GoTo_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__GoTo_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoTo_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoTo_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoTo_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/GoTo_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__GoTo_SendGoal_Response__init(msg: *mut GoTo_SendGoal_Response) -> bool;
    fn mission_interfaces__action__GoTo_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoTo_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__GoTo_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoTo_SendGoal_Response>);
    fn mission_interfaces__action__GoTo_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoTo_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GoTo_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__GoTo_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for GoTo_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__GoTo_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__GoTo_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoTo_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoTo_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoTo_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/GoTo_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__GoTo_GetResult_Request__init(msg: *mut GoTo_GetResult_Request) -> bool;
    fn mission_interfaces__action__GoTo_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoTo_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__GoTo_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoTo_GetResult_Request>);
    fn mission_interfaces__action__GoTo_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoTo_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GoTo_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__GoTo_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for GoTo_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__GoTo_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__GoTo_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoTo_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoTo_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoTo_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/GoTo_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__GoTo_GetResult_Response__init(msg: *mut GoTo_GetResult_Response) -> bool;
    fn mission_interfaces__action__GoTo_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoTo_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__GoTo_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoTo_GetResult_Response>);
    fn mission_interfaces__action__GoTo_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoTo_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GoTo_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__GoTo_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::GoTo_Result,

}



impl Default for GoTo_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__GoTo_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__GoTo_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoTo_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__GoTo_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoTo_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoTo_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/GoTo_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__GoTo_GetResult_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Land_SendGoal_Request__init(msg: *mut Land_SendGoal_Request) -> bool;
    fn mission_interfaces__action__Land_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Land_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__Land_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Land_SendGoal_Request>);
    fn mission_interfaces__action__Land_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Land_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Land_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__Land_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Land_Goal,

}



impl Default for Land_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Land_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Land_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Land_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Land_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Land_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Land_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Land_SendGoal_Response__init(msg: *mut Land_SendGoal_Response) -> bool;
    fn mission_interfaces__action__Land_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Land_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__Land_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Land_SendGoal_Response>);
    fn mission_interfaces__action__Land_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Land_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Land_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__Land_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Land_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Land_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Land_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Land_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Land_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Land_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Land_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Land_GetResult_Request__init(msg: *mut Land_GetResult_Request) -> bool;
    fn mission_interfaces__action__Land_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Land_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__Land_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Land_GetResult_Request>);
    fn mission_interfaces__action__Land_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Land_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Land_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__Land_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Land_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Land_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Land_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Land_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Land_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Land_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Land_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__Land_GetResult_Response__init(msg: *mut Land_GetResult_Response) -> bool;
    fn mission_interfaces__action__Land_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Land_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__Land_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Land_GetResult_Response>);
    fn mission_interfaces__action__Land_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Land_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Land_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__Land_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Land_Result,

}



impl Default for Land_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__Land_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__Land_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Land_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__Land_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Land_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Land_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/Land_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__Land_GetResult_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CaptureReference_SendGoal_Request__init(msg: *mut CaptureReference_SendGoal_Request) -> bool;
    fn mission_interfaces__action__CaptureReference_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__CaptureReference_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_SendGoal_Request>);
    fn mission_interfaces__action__CaptureReference_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureReference_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__CaptureReference_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::CaptureReference_Goal,

}



impl Default for CaptureReference_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CaptureReference_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CaptureReference_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureReference_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureReference_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CaptureReference_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CaptureReference_SendGoal_Response__init(msg: *mut CaptureReference_SendGoal_Response) -> bool;
    fn mission_interfaces__action__CaptureReference_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__CaptureReference_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_SendGoal_Response>);
    fn mission_interfaces__action__CaptureReference_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureReference_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__CaptureReference_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for CaptureReference_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CaptureReference_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CaptureReference_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureReference_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureReference_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CaptureReference_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CaptureReference_GetResult_Request__init(msg: *mut CaptureReference_GetResult_Request) -> bool;
    fn mission_interfaces__action__CaptureReference_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__CaptureReference_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_GetResult_Request>);
    fn mission_interfaces__action__CaptureReference_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureReference_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__CaptureReference_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for CaptureReference_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CaptureReference_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CaptureReference_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureReference_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureReference_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CaptureReference_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CaptureReference_GetResult_Response__init(msg: *mut CaptureReference_GetResult_Response) -> bool;
    fn mission_interfaces__action__CaptureReference_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__CaptureReference_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_GetResult_Response>);
    fn mission_interfaces__action__CaptureReference_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureReference_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureReference_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__CaptureReference_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::CaptureReference_Result,

}



impl Default for CaptureReference_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CaptureReference_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CaptureReference_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureReference_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CaptureReference_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureReference_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CaptureReference_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CaptureReference_GetResult_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchBanner_SendGoal_Request__init(msg: *mut SearchBanner_SendGoal_Request) -> bool;
    fn mission_interfaces__action__SearchBanner_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__SearchBanner_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_SendGoal_Request>);
    fn mission_interfaces__action__SearchBanner_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchBanner_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchBanner_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::SearchBanner_Goal,

}



impl Default for SearchBanner_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchBanner_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchBanner_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchBanner_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchBanner_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchBanner_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchBanner_SendGoal_Response__init(msg: *mut SearchBanner_SendGoal_Response) -> bool;
    fn mission_interfaces__action__SearchBanner_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__SearchBanner_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_SendGoal_Response>);
    fn mission_interfaces__action__SearchBanner_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchBanner_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchBanner_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for SearchBanner_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchBanner_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchBanner_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchBanner_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchBanner_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchBanner_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchBanner_GetResult_Request__init(msg: *mut SearchBanner_GetResult_Request) -> bool;
    fn mission_interfaces__action__SearchBanner_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__SearchBanner_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_GetResult_Request>);
    fn mission_interfaces__action__SearchBanner_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchBanner_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchBanner_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for SearchBanner_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchBanner_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchBanner_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchBanner_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchBanner_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchBanner_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchBanner_GetResult_Response__init(msg: *mut SearchBanner_GetResult_Response) -> bool;
    fn mission_interfaces__action__SearchBanner_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__SearchBanner_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_GetResult_Response>);
    fn mission_interfaces__action__SearchBanner_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchBanner_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchBanner_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchBanner_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::SearchBanner_Result,

}



impl Default for SearchBanner_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchBanner_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchBanner_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchBanner_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchBanner_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchBanner_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchBanner_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchBanner_GetResult_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__AlignBanner_SendGoal_Request__init(msg: *mut AlignBanner_SendGoal_Request) -> bool;
    fn mission_interfaces__action__AlignBanner_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__AlignBanner_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_SendGoal_Request>);
    fn mission_interfaces__action__AlignBanner_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AlignBanner_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__AlignBanner_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::AlignBanner_Goal,

}



impl Default for AlignBanner_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__AlignBanner_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__AlignBanner_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AlignBanner_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AlignBanner_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/AlignBanner_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__AlignBanner_SendGoal_Response__init(msg: *mut AlignBanner_SendGoal_Response) -> bool;
    fn mission_interfaces__action__AlignBanner_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__AlignBanner_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_SendGoal_Response>);
    fn mission_interfaces__action__AlignBanner_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AlignBanner_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__AlignBanner_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for AlignBanner_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__AlignBanner_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__AlignBanner_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AlignBanner_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AlignBanner_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/AlignBanner_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__AlignBanner_GetResult_Request__init(msg: *mut AlignBanner_GetResult_Request) -> bool;
    fn mission_interfaces__action__AlignBanner_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__AlignBanner_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_GetResult_Request>);
    fn mission_interfaces__action__AlignBanner_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AlignBanner_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__AlignBanner_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for AlignBanner_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__AlignBanner_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__AlignBanner_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AlignBanner_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AlignBanner_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/AlignBanner_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__AlignBanner_GetResult_Response__init(msg: *mut AlignBanner_GetResult_Response) -> bool;
    fn mission_interfaces__action__AlignBanner_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__AlignBanner_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_GetResult_Response>);
    fn mission_interfaces__action__AlignBanner_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AlignBanner_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AlignBanner_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__AlignBanner_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::AlignBanner_Result,

}



impl Default for AlignBanner_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__AlignBanner_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__AlignBanner_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AlignBanner_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__AlignBanner_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AlignBanner_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/AlignBanner_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__AlignBanner_GetResult_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__TraverseCorridor_SendGoal_Request__init(msg: *mut TraverseCorridor_SendGoal_Request) -> bool;
    fn mission_interfaces__action__TraverseCorridor_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__TraverseCorridor_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_SendGoal_Request>);
    fn mission_interfaces__action__TraverseCorridor_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TraverseCorridor_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__TraverseCorridor_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::TraverseCorridor_Goal,

}



impl Default for TraverseCorridor_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__TraverseCorridor_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__TraverseCorridor_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TraverseCorridor_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TraverseCorridor_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/TraverseCorridor_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__TraverseCorridor_SendGoal_Response__init(msg: *mut TraverseCorridor_SendGoal_Response) -> bool;
    fn mission_interfaces__action__TraverseCorridor_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__TraverseCorridor_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_SendGoal_Response>);
    fn mission_interfaces__action__TraverseCorridor_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TraverseCorridor_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__TraverseCorridor_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for TraverseCorridor_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__TraverseCorridor_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__TraverseCorridor_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TraverseCorridor_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TraverseCorridor_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/TraverseCorridor_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__TraverseCorridor_GetResult_Request__init(msg: *mut TraverseCorridor_GetResult_Request) -> bool;
    fn mission_interfaces__action__TraverseCorridor_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__TraverseCorridor_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_GetResult_Request>);
    fn mission_interfaces__action__TraverseCorridor_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TraverseCorridor_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__TraverseCorridor_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for TraverseCorridor_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__TraverseCorridor_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__TraverseCorridor_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TraverseCorridor_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TraverseCorridor_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/TraverseCorridor_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__TraverseCorridor_GetResult_Response__init(msg: *mut TraverseCorridor_GetResult_Response) -> bool;
    fn mission_interfaces__action__TraverseCorridor_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__TraverseCorridor_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_GetResult_Response>);
    fn mission_interfaces__action__TraverseCorridor_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TraverseCorridor_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TraverseCorridor_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__TraverseCorridor_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::TraverseCorridor_Result,

}



impl Default for TraverseCorridor_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__TraverseCorridor_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__TraverseCorridor_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TraverseCorridor_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__TraverseCorridor_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TraverseCorridor_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/TraverseCorridor_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__TraverseCorridor_GetResult_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchTarget_SendGoal_Request__init(msg: *mut SearchTarget_SendGoal_Request) -> bool;
    fn mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_SendGoal_Request>);
    fn mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchTarget_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchTarget_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::SearchTarget_Goal,

}



impl Default for SearchTarget_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchTarget_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchTarget_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchTarget_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchTarget_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchTarget_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchTarget_SendGoal_Response__init(msg: *mut SearchTarget_SendGoal_Response) -> bool;
    fn mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_SendGoal_Response>);
    fn mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchTarget_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchTarget_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for SearchTarget_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchTarget_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchTarget_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchTarget_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchTarget_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchTarget_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchTarget_GetResult_Request__init(msg: *mut SearchTarget_GetResult_Request) -> bool;
    fn mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_GetResult_Request>);
    fn mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchTarget_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchTarget_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for SearchTarget_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchTarget_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchTarget_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchTarget_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchTarget_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchTarget_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SearchTarget_GetResult_Response__init(msg: *mut SearchTarget_GetResult_Response) -> bool;
    fn mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_GetResult_Response>);
    fn mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchTarget_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchTarget_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__SearchTarget_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::SearchTarget_Result,

}



impl Default for SearchTarget_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SearchTarget_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SearchTarget_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchTarget_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchTarget_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SearchTarget_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SearchTarget_GetResult_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SafeGoto_SendGoal_Request__init(msg: *mut SafeGoto_SendGoal_Request) -> bool;
    fn mission_interfaces__action__SafeGoto_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__SafeGoto_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_SendGoal_Request>);
    fn mission_interfaces__action__SafeGoto_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SafeGoto_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__SafeGoto_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::SafeGoto_Goal,

}



impl Default for SafeGoto_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SafeGoto_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SafeGoto_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SafeGoto_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SafeGoto_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SafeGoto_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SafeGoto_SendGoal_Response__init(msg: *mut SafeGoto_SendGoal_Response) -> bool;
    fn mission_interfaces__action__SafeGoto_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__SafeGoto_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_SendGoal_Response>);
    fn mission_interfaces__action__SafeGoto_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SafeGoto_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__SafeGoto_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for SafeGoto_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SafeGoto_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SafeGoto_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SafeGoto_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SafeGoto_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SafeGoto_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SafeGoto_GetResult_Request__init(msg: *mut SafeGoto_GetResult_Request) -> bool;
    fn mission_interfaces__action__SafeGoto_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__SafeGoto_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_GetResult_Request>);
    fn mission_interfaces__action__SafeGoto_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SafeGoto_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__SafeGoto_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for SafeGoto_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SafeGoto_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SafeGoto_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SafeGoto_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SafeGoto_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SafeGoto_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__SafeGoto_GetResult_Response__init(msg: *mut SafeGoto_GetResult_Response) -> bool;
    fn mission_interfaces__action__SafeGoto_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__SafeGoto_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_GetResult_Response>);
    fn mission_interfaces__action__SafeGoto_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SafeGoto_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SafeGoto_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__SafeGoto_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::SafeGoto_Result,

}



impl Default for SafeGoto_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__SafeGoto_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__SafeGoto_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SafeGoto_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__SafeGoto_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SafeGoto_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/SafeGoto_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__SafeGoto_GetResult_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__LawnmowerSearch_SendGoal_Request__init(msg: *mut LawnmowerSearch_SendGoal_Request) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_SendGoal_Request>);
    fn mission_interfaces__action__LawnmowerSearch_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LawnmowerSearch_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__LawnmowerSearch_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::LawnmowerSearch_Goal,

}



impl Default for LawnmowerSearch_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__LawnmowerSearch_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__LawnmowerSearch_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LawnmowerSearch_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LawnmowerSearch_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/LawnmowerSearch_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__LawnmowerSearch_SendGoal_Response__init(msg: *mut LawnmowerSearch_SendGoal_Response) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_SendGoal_Response>);
    fn mission_interfaces__action__LawnmowerSearch_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LawnmowerSearch_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__LawnmowerSearch_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for LawnmowerSearch_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__LawnmowerSearch_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__LawnmowerSearch_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LawnmowerSearch_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LawnmowerSearch_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/LawnmowerSearch_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__LawnmowerSearch_GetResult_Request__init(msg: *mut LawnmowerSearch_GetResult_Request) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_GetResult_Request>);
    fn mission_interfaces__action__LawnmowerSearch_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LawnmowerSearch_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__LawnmowerSearch_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for LawnmowerSearch_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__LawnmowerSearch_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__LawnmowerSearch_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LawnmowerSearch_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LawnmowerSearch_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/LawnmowerSearch_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__LawnmowerSearch_GetResult_Response__init(msg: *mut LawnmowerSearch_GetResult_Response) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__LawnmowerSearch_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_GetResult_Response>);
    fn mission_interfaces__action__LawnmowerSearch_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LawnmowerSearch_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LawnmowerSearch_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__LawnmowerSearch_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::LawnmowerSearch_Result,

}



impl Default for LawnmowerSearch_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__LawnmowerSearch_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__LawnmowerSearch_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LawnmowerSearch_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__LawnmowerSearch_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LawnmowerSearch_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/LawnmowerSearch_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__LawnmowerSearch_GetResult_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CenterOnQr_SendGoal_Request__init(msg: *mut CenterOnQr_SendGoal_Request) -> bool;
    fn mission_interfaces__action__CenterOnQr_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__CenterOnQr_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_SendGoal_Request>);
    fn mission_interfaces__action__CenterOnQr_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CenterOnQr_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__CenterOnQr_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::CenterOnQr_Goal,

}



impl Default for CenterOnQr_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CenterOnQr_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CenterOnQr_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CenterOnQr_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CenterOnQr_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CenterOnQr_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CenterOnQr_SendGoal_Response__init(msg: *mut CenterOnQr_SendGoal_Response) -> bool;
    fn mission_interfaces__action__CenterOnQr_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__CenterOnQr_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_SendGoal_Response>);
    fn mission_interfaces__action__CenterOnQr_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CenterOnQr_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__CenterOnQr_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for CenterOnQr_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CenterOnQr_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CenterOnQr_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CenterOnQr_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CenterOnQr_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CenterOnQr_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CenterOnQr_GetResult_Request__init(msg: *mut CenterOnQr_GetResult_Request) -> bool;
    fn mission_interfaces__action__CenterOnQr_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__CenterOnQr_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_GetResult_Request>);
    fn mission_interfaces__action__CenterOnQr_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CenterOnQr_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__CenterOnQr_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for CenterOnQr_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CenterOnQr_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CenterOnQr_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CenterOnQr_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CenterOnQr_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CenterOnQr_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__CenterOnQr_GetResult_Response__init(msg: *mut CenterOnQr_GetResult_Response) -> bool;
    fn mission_interfaces__action__CenterOnQr_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__CenterOnQr_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_GetResult_Response>);
    fn mission_interfaces__action__CenterOnQr_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CenterOnQr_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CenterOnQr_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__CenterOnQr_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::CenterOnQr_Result,

}



impl Default for CenterOnQr_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__CenterOnQr_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__CenterOnQr_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CenterOnQr_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__CenterOnQr_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CenterOnQr_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/CenterOnQr_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__CenterOnQr_GetResult_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__NavigateToTarget_SendGoal_Request__init(msg: *mut NavigateToTarget_SendGoal_Request) -> bool;
    fn mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_SendGoal_Request>);
    fn mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToTarget_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__NavigateToTarget_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::NavigateToTarget_Goal,

}



impl Default for NavigateToTarget_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__NavigateToTarget_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__NavigateToTarget_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToTarget_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToTarget_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/NavigateToTarget_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__NavigateToTarget_SendGoal_Response__init(msg: *mut NavigateToTarget_SendGoal_Response) -> bool;
    fn mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_SendGoal_Response>);
    fn mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToTarget_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__NavigateToTarget_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for NavigateToTarget_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__NavigateToTarget_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__NavigateToTarget_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToTarget_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToTarget_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/NavigateToTarget_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__NavigateToTarget_GetResult_Request__init(msg: *mut NavigateToTarget_GetResult_Request) -> bool;
    fn mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_GetResult_Request>);
    fn mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToTarget_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__NavigateToTarget_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for NavigateToTarget_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__NavigateToTarget_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__NavigateToTarget_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToTarget_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToTarget_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/NavigateToTarget_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__NavigateToTarget_GetResult_Response__init(msg: *mut NavigateToTarget_GetResult_Response) -> bool;
    fn mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_GetResult_Response>);
    fn mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToTarget_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToTarget_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__NavigateToTarget_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::NavigateToTarget_Result,

}



impl Default for NavigateToTarget_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__NavigateToTarget_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__NavigateToTarget_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToTarget_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToTarget_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/NavigateToTarget_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__NavigateToTarget_GetResult_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__PayloadDrop_SendGoal_Request__init(msg: *mut PayloadDrop_SendGoal_Request) -> bool;
    fn mission_interfaces__action__PayloadDrop_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_SendGoal_Request>, size: usize) -> bool;
    fn mission_interfaces__action__PayloadDrop_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_SendGoal_Request>);
    fn mission_interfaces__action__PayloadDrop_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PayloadDrop_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_SendGoal_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__PayloadDrop_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::PayloadDrop_Goal,

}



impl Default for PayloadDrop_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__PayloadDrop_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__PayloadDrop_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PayloadDrop_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PayloadDrop_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/PayloadDrop_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_SendGoal_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__PayloadDrop_SendGoal_Response__init(msg: *mut PayloadDrop_SendGoal_Response) -> bool;
    fn mission_interfaces__action__PayloadDrop_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_SendGoal_Response>, size: usize) -> bool;
    fn mission_interfaces__action__PayloadDrop_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_SendGoal_Response>);
    fn mission_interfaces__action__PayloadDrop_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PayloadDrop_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_SendGoal_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__PayloadDrop_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for PayloadDrop_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__PayloadDrop_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__PayloadDrop_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PayloadDrop_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PayloadDrop_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/PayloadDrop_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_SendGoal_Response() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__PayloadDrop_GetResult_Request__init(msg: *mut PayloadDrop_GetResult_Request) -> bool;
    fn mission_interfaces__action__PayloadDrop_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_GetResult_Request>, size: usize) -> bool;
    fn mission_interfaces__action__PayloadDrop_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_GetResult_Request>);
    fn mission_interfaces__action__PayloadDrop_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PayloadDrop_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_GetResult_Request>) -> bool;
}

// Corresponds to mission_interfaces__action__PayloadDrop_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for PayloadDrop_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__PayloadDrop_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__PayloadDrop_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PayloadDrop_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PayloadDrop_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/PayloadDrop_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_GetResult_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__action__PayloadDrop_GetResult_Response__init(msg: *mut PayloadDrop_GetResult_Response) -> bool;
    fn mission_interfaces__action__PayloadDrop_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_GetResult_Response>, size: usize) -> bool;
    fn mission_interfaces__action__PayloadDrop_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_GetResult_Response>);
    fn mission_interfaces__action__PayloadDrop_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PayloadDrop_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PayloadDrop_GetResult_Response>) -> bool;
}

// Corresponds to mission_interfaces__action__PayloadDrop_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::PayloadDrop_Result,

}



impl Default for PayloadDrop_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__action__PayloadDrop_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__action__PayloadDrop_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PayloadDrop_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__action__PayloadDrop_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PayloadDrop_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/action/PayloadDrop_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__action__PayloadDrop_GetResult_Response() }
  }
}






#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__Takeoff_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__Takeoff_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Takeoff_SendGoal;

impl rosidl_runtime_rs::Service for Takeoff_SendGoal {
    type Request = Takeoff_SendGoal_Request;
    type Response = Takeoff_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__Takeoff_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__Takeoff_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__Takeoff_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Takeoff_GetResult;

impl rosidl_runtime_rs::Service for Takeoff_GetResult {
    type Request = Takeoff_GetResult_Request;
    type Response = Takeoff_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__Takeoff_GetResult() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__GoTo_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__GoTo_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct GoTo_SendGoal;

impl rosidl_runtime_rs::Service for GoTo_SendGoal {
    type Request = GoTo_SendGoal_Request;
    type Response = GoTo_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__GoTo_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__GoTo_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__GoTo_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct GoTo_GetResult;

impl rosidl_runtime_rs::Service for GoTo_GetResult {
    type Request = GoTo_GetResult_Request;
    type Response = GoTo_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__GoTo_GetResult() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__Land_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__Land_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Land_SendGoal;

impl rosidl_runtime_rs::Service for Land_SendGoal {
    type Request = Land_SendGoal_Request;
    type Response = Land_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__Land_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__Land_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__Land_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Land_GetResult;

impl rosidl_runtime_rs::Service for Land_GetResult {
    type Request = Land_GetResult_Request;
    type Response = Land_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__Land_GetResult() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__CaptureReference_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__CaptureReference_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct CaptureReference_SendGoal;

impl rosidl_runtime_rs::Service for CaptureReference_SendGoal {
    type Request = CaptureReference_SendGoal_Request;
    type Response = CaptureReference_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__CaptureReference_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__CaptureReference_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__CaptureReference_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct CaptureReference_GetResult;

impl rosidl_runtime_rs::Service for CaptureReference_GetResult {
    type Request = CaptureReference_GetResult_Request;
    type Response = CaptureReference_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__CaptureReference_GetResult() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__SearchBanner_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__SearchBanner_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct SearchBanner_SendGoal;

impl rosidl_runtime_rs::Service for SearchBanner_SendGoal {
    type Request = SearchBanner_SendGoal_Request;
    type Response = SearchBanner_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__SearchBanner_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__SearchBanner_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__SearchBanner_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct SearchBanner_GetResult;

impl rosidl_runtime_rs::Service for SearchBanner_GetResult {
    type Request = SearchBanner_GetResult_Request;
    type Response = SearchBanner_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__SearchBanner_GetResult() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__AlignBanner_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__AlignBanner_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct AlignBanner_SendGoal;

impl rosidl_runtime_rs::Service for AlignBanner_SendGoal {
    type Request = AlignBanner_SendGoal_Request;
    type Response = AlignBanner_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__AlignBanner_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__AlignBanner_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__AlignBanner_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct AlignBanner_GetResult;

impl rosidl_runtime_rs::Service for AlignBanner_GetResult {
    type Request = AlignBanner_GetResult_Request;
    type Response = AlignBanner_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__AlignBanner_GetResult() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__TraverseCorridor_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__TraverseCorridor_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct TraverseCorridor_SendGoal;

impl rosidl_runtime_rs::Service for TraverseCorridor_SendGoal {
    type Request = TraverseCorridor_SendGoal_Request;
    type Response = TraverseCorridor_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__TraverseCorridor_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__TraverseCorridor_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__TraverseCorridor_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct TraverseCorridor_GetResult;

impl rosidl_runtime_rs::Service for TraverseCorridor_GetResult {
    type Request = TraverseCorridor_GetResult_Request;
    type Response = TraverseCorridor_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__TraverseCorridor_GetResult() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__SearchTarget_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__SearchTarget_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct SearchTarget_SendGoal;

impl rosidl_runtime_rs::Service for SearchTarget_SendGoal {
    type Request = SearchTarget_SendGoal_Request;
    type Response = SearchTarget_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__SearchTarget_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__SearchTarget_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__SearchTarget_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct SearchTarget_GetResult;

impl rosidl_runtime_rs::Service for SearchTarget_GetResult {
    type Request = SearchTarget_GetResult_Request;
    type Response = SearchTarget_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__SearchTarget_GetResult() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__SafeGoto_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__SafeGoto_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct SafeGoto_SendGoal;

impl rosidl_runtime_rs::Service for SafeGoto_SendGoal {
    type Request = SafeGoto_SendGoal_Request;
    type Response = SafeGoto_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__SafeGoto_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__SafeGoto_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__SafeGoto_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct SafeGoto_GetResult;

impl rosidl_runtime_rs::Service for SafeGoto_GetResult {
    type Request = SafeGoto_GetResult_Request;
    type Response = SafeGoto_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__SafeGoto_GetResult() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__LawnmowerSearch_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__LawnmowerSearch_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct LawnmowerSearch_SendGoal;

impl rosidl_runtime_rs::Service for LawnmowerSearch_SendGoal {
    type Request = LawnmowerSearch_SendGoal_Request;
    type Response = LawnmowerSearch_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__LawnmowerSearch_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__LawnmowerSearch_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__LawnmowerSearch_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct LawnmowerSearch_GetResult;

impl rosidl_runtime_rs::Service for LawnmowerSearch_GetResult {
    type Request = LawnmowerSearch_GetResult_Request;
    type Response = LawnmowerSearch_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__LawnmowerSearch_GetResult() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__CenterOnQr_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__CenterOnQr_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct CenterOnQr_SendGoal;

impl rosidl_runtime_rs::Service for CenterOnQr_SendGoal {
    type Request = CenterOnQr_SendGoal_Request;
    type Response = CenterOnQr_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__CenterOnQr_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__CenterOnQr_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__CenterOnQr_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct CenterOnQr_GetResult;

impl rosidl_runtime_rs::Service for CenterOnQr_GetResult {
    type Request = CenterOnQr_GetResult_Request;
    type Response = CenterOnQr_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__CenterOnQr_GetResult() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__NavigateToTarget_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__NavigateToTarget_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateToTarget_SendGoal;

impl rosidl_runtime_rs::Service for NavigateToTarget_SendGoal {
    type Request = NavigateToTarget_SendGoal_Request;
    type Response = NavigateToTarget_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__NavigateToTarget_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__NavigateToTarget_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__NavigateToTarget_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateToTarget_GetResult;

impl rosidl_runtime_rs::Service for NavigateToTarget_GetResult {
    type Request = NavigateToTarget_GetResult_Request;
    type Response = NavigateToTarget_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__NavigateToTarget_GetResult() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__PayloadDrop_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__PayloadDrop_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct PayloadDrop_SendGoal;

impl rosidl_runtime_rs::Service for PayloadDrop_SendGoal {
    type Request = PayloadDrop_SendGoal_Request;
    type Response = PayloadDrop_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__PayloadDrop_SendGoal() }
    }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__PayloadDrop_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__PayloadDrop_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct PayloadDrop_GetResult;

impl rosidl_runtime_rs::Service for PayloadDrop_GetResult {
    type Request = PayloadDrop_GetResult_Request;
    type Response = PayloadDrop_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__action__PayloadDrop_GetResult() }
    }
}


