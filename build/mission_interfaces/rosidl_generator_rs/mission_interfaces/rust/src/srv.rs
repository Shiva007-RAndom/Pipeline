#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to mission_interfaces__srv__SetBannerColor_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBannerColor_Request {
    /// "green" | "blue" | ""
    pub color: std::string::String,

}



impl Default for SetBannerColor_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBannerColor_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetBannerColor_Request {
  type RmwMsg = super::srv::rmw::SetBannerColor_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: msg.color.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: msg.color.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      color: msg.color.to_string(),
    }
  }
}


// Corresponds to mission_interfaces__srv__SetBannerColor_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBannerColor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetBannerColor_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBannerColor_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetBannerColor_Response {
  type RmwMsg = super::srv::rmw::SetBannerColor_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
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


