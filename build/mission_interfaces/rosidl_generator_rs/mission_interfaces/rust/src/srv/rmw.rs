#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__srv__SetBannerColor_Request() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__srv__SetBannerColor_Request__init(msg: *mut SetBannerColor_Request) -> bool;
    fn mission_interfaces__srv__SetBannerColor_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBannerColor_Request>, size: usize) -> bool;
    fn mission_interfaces__srv__SetBannerColor_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBannerColor_Request>);
    fn mission_interfaces__srv__SetBannerColor_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBannerColor_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBannerColor_Request>) -> bool;
}

// Corresponds to mission_interfaces__srv__SetBannerColor_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBannerColor_Request {
    /// "green" | "blue" | ""
    pub color: rosidl_runtime_rs::String,

}



impl Default for SetBannerColor_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__srv__SetBannerColor_Request__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__srv__SetBannerColor_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBannerColor_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__srv__SetBannerColor_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__srv__SetBannerColor_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__srv__SetBannerColor_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBannerColor_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBannerColor_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/srv/SetBannerColor_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__srv__SetBannerColor_Request() }
  }
}


#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__srv__SetBannerColor_Response() -> *const std::ffi::c_void;
}

#[link(name = "mission_interfaces__rosidl_generator_c")]
extern "C" {
    fn mission_interfaces__srv__SetBannerColor_Response__init(msg: *mut SetBannerColor_Response) -> bool;
    fn mission_interfaces__srv__SetBannerColor_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBannerColor_Response>, size: usize) -> bool;
    fn mission_interfaces__srv__SetBannerColor_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBannerColor_Response>);
    fn mission_interfaces__srv__SetBannerColor_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBannerColor_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBannerColor_Response>) -> bool;
}

// Corresponds to mission_interfaces__srv__SetBannerColor_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBannerColor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetBannerColor_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mission_interfaces__srv__SetBannerColor_Response__init(&mut msg as *mut _) {
        panic!("Call to mission_interfaces__srv__SetBannerColor_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBannerColor_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__srv__SetBannerColor_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__srv__SetBannerColor_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mission_interfaces__srv__SetBannerColor_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBannerColor_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBannerColor_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mission_interfaces/srv/SetBannerColor_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mission_interfaces__srv__SetBannerColor_Response() }
  }
}






#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__srv__SetBannerColor() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__srv__SetBannerColor
#[allow(missing_docs, non_camel_case_types)]
pub struct SetBannerColor;

impl rosidl_runtime_rs::Service for SetBannerColor {
    type Request = SetBannerColor_Request;
    type Response = SetBannerColor_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mission_interfaces__srv__SetBannerColor() }
    }
}


