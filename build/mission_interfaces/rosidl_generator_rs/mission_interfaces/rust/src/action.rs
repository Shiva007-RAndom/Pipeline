
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to mission_interfaces__action__Takeoff_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_Goal {
    /// m to climb above the current altitude
    pub altitude: f32,

}



impl Default for Takeoff_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Takeoff_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for Takeoff_Goal {
  type RmwMsg = super::action::rmw::Takeoff_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        altitude: msg.altitude,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      altitude: msg.altitude,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      altitude: msg.altitude,
    }
  }
}


// Corresponds to mission_interfaces__action__Takeoff_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for Takeoff_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Takeoff_Result::default())
  }
}

impl rosidl_runtime_rs::Message for Takeoff_Result {
  type RmwMsg = super::action::rmw::Takeoff_Result;

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


// Corresponds to mission_interfaces__action__Takeoff_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_Feedback {
    /// m
    pub altitude_remaining: f32,

}



impl Default for Takeoff_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Takeoff_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for Takeoff_Feedback {
  type RmwMsg = super::action::rmw::Takeoff_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        altitude_remaining: msg.altitude_remaining,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      altitude_remaining: msg.altitude_remaining,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      altitude_remaining: msg.altitude_remaining,
    }
  }
}


// Corresponds to mission_interfaces__action__Takeoff_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::Takeoff_Feedback,

}



impl Default for Takeoff_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Takeoff_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for Takeoff_FeedbackMessage {
  type RmwMsg = super::action::rmw::Takeoff_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::Takeoff_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::Takeoff_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::Takeoff_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to mission_interfaces__action__GoTo_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GoTo_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for GoTo_Goal {
  type RmwMsg = super::action::rmw::GoTo_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        frame: msg.frame,
        x: msg.x,
        y: msg.y,
        z: msg.z,
        yaw: msg.yaw,
        speed: msg.speed,
        acceptance_radius: msg.acceptance_radius,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      frame: msg.frame,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      yaw: msg.yaw,
      speed: msg.speed,
      acceptance_radius: msg.acceptance_radius,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      frame: msg.frame,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      yaw: msg.yaw,
      speed: msg.speed,
      acceptance_radius: msg.acceptance_radius,
    }
  }
}


// Corresponds to mission_interfaces__action__GoTo_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// local NED
    pub final_position: geometry_msgs::msg::Point,

}



impl Default for GoTo_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GoTo_Result::default())
  }
}

impl rosidl_runtime_rs::Message for GoTo_Result {
  type RmwMsg = super::action::rmw::GoTo_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        final_position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.final_position)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        final_position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.final_position)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      final_position: geometry_msgs::msg::Point::from_rmw_message(msg.final_position),
    }
  }
}


// Corresponds to mission_interfaces__action__GoTo_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_Feedback {
    /// m
    pub distance_remaining: f32,

}



impl Default for GoTo_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GoTo_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for GoTo_Feedback {
  type RmwMsg = super::action::rmw::GoTo_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        distance_remaining: msg.distance_remaining,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      distance_remaining: msg.distance_remaining,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      distance_remaining: msg.distance_remaining,
    }
  }
}


// Corresponds to mission_interfaces__action__GoTo_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::GoTo_Feedback,

}



impl Default for GoTo_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GoTo_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for GoTo_FeedbackMessage {
  type RmwMsg = super::action::rmw::GoTo_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::GoTo_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::GoTo_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::GoTo_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to mission_interfaces__action__Land_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Land_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Land_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for Land_Goal {
  type RmwMsg = super::action::rmw::Land_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to mission_interfaces__action__Land_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for Land_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Land_Result::default())
  }
}

impl rosidl_runtime_rs::Message for Land_Result {
  type RmwMsg = super::action::rmw::Land_Result;

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


// Corresponds to mission_interfaces__action__Land_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_Feedback {
    /// m above the local origin
    pub altitude: f32,

}



impl Default for Land_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Land_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for Land_Feedback {
  type RmwMsg = super::action::rmw::Land_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        altitude: msg.altitude,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      altitude: msg.altitude,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      altitude: msg.altitude,
    }
  }
}


// Corresponds to mission_interfaces__action__Land_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::Land_Feedback,

}



impl Default for Land_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Land_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for Land_FeedbackMessage {
  type RmwMsg = super::action::rmw::Land_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::Land_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::Land_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::Land_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to mission_interfaces__action__CaptureReference_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for CaptureReference_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CaptureReference_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_Goal {
  type RmwMsg = super::action::rmw::CaptureReference_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to mission_interfaces__action__CaptureReference_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// saved warp of the captured QR ("" if saving failed)
    pub image_path: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub decoded_text: std::string::String,

}



impl Default for CaptureReference_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CaptureReference_Result::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_Result {
  type RmwMsg = super::action::rmw::CaptureReference_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        image_path: msg.image_path.as_str().into(),
        decoded_text: msg.decoded_text.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        image_path: msg.image_path.as_str().into(),
        decoded_text: msg.decoded_text.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      image_path: msg.image_path.to_string(),
      decoded_text: msg.decoded_text.to_string(),
    }
  }
}


// Corresponds to mission_interfaces__action__CaptureReference_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_Feedback {
    /// s since the goal started
    pub elapsed: f32,

}



impl Default for CaptureReference_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CaptureReference_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_Feedback {
  type RmwMsg = super::action::rmw::CaptureReference_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        elapsed: msg.elapsed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      elapsed: msg.elapsed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      elapsed: msg.elapsed,
    }
  }
}


// Corresponds to mission_interfaces__action__CaptureReference_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::CaptureReference_Feedback,

}



impl Default for CaptureReference_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CaptureReference_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_FeedbackMessage {
  type RmwMsg = super::action::rmw::CaptureReference_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::CaptureReference_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::CaptureReference_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::CaptureReference_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to mission_interfaces__action__SearchBanner_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_Goal {
    /// "green" | "blue"
    pub color: std::string::String,

    /// local NED
    pub waypoints: Vec<geometry_msgs::msg::Point>,

    /// heading held during the search (rad, 0 = north, clockwise)
    pub yaw: f32,

    /// m/s; <= 0 uses the flight controller default
    pub speed: f32,

    /// s to hover and look at waypoint i (missing entries = 0)
    pub dwell: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detect_while_moving: bool,

}



impl Default for SearchBanner_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchBanner_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_Goal {
  type RmwMsg = super::action::rmw::SearchBanner_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: msg.color.as_str().into(),
        waypoints: msg.waypoints
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        yaw: msg.yaw,
        speed: msg.speed,
        dwell: msg.dwell.into(),
        detect_while_moving: msg.detect_while_moving,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: msg.color.as_str().into(),
        waypoints: msg.waypoints
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      yaw: msg.yaw,
      speed: msg.speed,
        dwell: msg.dwell.as_slice().into(),
      detect_while_moving: msg.detect_while_moving,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      color: msg.color.to_string(),
      waypoints: msg.waypoints
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      yaw: msg.yaw,
      speed: msg.speed,
      dwell: msg.dwell
          .into_iter()
          .collect(),
      detect_while_moving: msg.detect_while_moving,
    }
  }
}


// Corresponds to mission_interfaces__action__SearchBanner_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_Result {
    /// true = banner classified
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// local NED of the banner centre at detection time
    pub banner_estimate: geometry_msgs::msg::Point,

    /// drone position when it was classified
    pub drone_position: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoint_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: std::string::String,

}



impl Default for SearchBanner_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchBanner_Result::default())
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_Result {
  type RmwMsg = super::action::rmw::SearchBanner_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        banner_estimate: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.banner_estimate)).into_owned(),
        drone_position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.drone_position)).into_owned(),
        waypoint_index: msg.waypoint_index,
        source: msg.source.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        banner_estimate: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.banner_estimate)).into_owned(),
        drone_position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.drone_position)).into_owned(),
      waypoint_index: msg.waypoint_index,
        source: msg.source.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      banner_estimate: geometry_msgs::msg::Point::from_rmw_message(msg.banner_estimate),
      drone_position: geometry_msgs::msg::Point::from_rmw_message(msg.drone_position),
      waypoint_index: msg.waypoint_index,
      source: msg.source.to_string(),
    }
  }
}


// Corresponds to mission_interfaces__action__SearchBanner_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoint: u32,

}



impl Default for SearchBanner_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchBanner_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_Feedback {
  type RmwMsg = super::action::rmw::SearchBanner_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
        waypoint: msg.waypoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
      waypoint: msg.waypoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state.to_string(),
      waypoint: msg.waypoint,
    }
  }
}


// Corresponds to mission_interfaces__action__SearchBanner_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::SearchBanner_Feedback,

}



impl Default for SearchBanner_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchBanner_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_FeedbackMessage {
  type RmwMsg = super::action::rmw::SearchBanner_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::SearchBanner_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::SearchBanner_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::SearchBanner_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to mission_interfaces__action__AlignBanner_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub color: std::string::String,

    /// local NED to fly to first (from SearchBanner); z = altitude to hold
    pub initial_target: geometry_msgs::msg::Point,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AlignBanner_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_Goal {
  type RmwMsg = super::action::rmw::AlignBanner_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: msg.color.as_str().into(),
        initial_target: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.initial_target)).into_owned(),
        expected_heading: msg.expected_heading,
        max_heading_correction: msg.max_heading_correction,
        max_iters: msg.max_iters,
        tol_px: msg.tol_px,
        gain: msg.gain,
        settle_time: msg.settle_time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: msg.color.as_str().into(),
        initial_target: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.initial_target)).into_owned(),
      expected_heading: msg.expected_heading,
      max_heading_correction: msg.max_heading_correction,
      max_iters: msg.max_iters,
      tol_px: msg.tol_px,
      gain: msg.gain,
      settle_time: msg.settle_time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      color: msg.color.to_string(),
      initial_target: geometry_msgs::msg::Point::from_rmw_message(msg.initial_target),
      expected_heading: msg.expected_heading,
      max_heading_correction: msg.max_heading_correction,
      max_iters: msg.max_iters,
      tol_px: msg.tol_px,
      gain: msg.gain,
      settle_time: msg.settle_time,
    }
  }
}


// Corresponds to mission_interfaces__action__AlignBanner_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_Result {
    /// false only if cancelled or the flight controller failed
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// centred within tol_px with the banner fully in view
    pub locked: bool,

    /// at least one heading candidate was accepted
    pub heading_measured: bool,

    /// last accepted candidate, else expected_heading
    pub corridor_heading: f32,

    /// final servo target (local NED)
    pub banner_position: geometry_msgs::msg::Point,

}



impl Default for AlignBanner_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AlignBanner_Result::default())
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_Result {
  type RmwMsg = super::action::rmw::AlignBanner_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        locked: msg.locked,
        heading_measured: msg.heading_measured,
        corridor_heading: msg.corridor_heading,
        banner_position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.banner_position)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      locked: msg.locked,
      heading_measured: msg.heading_measured,
      corridor_heading: msg.corridor_heading,
        banner_position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.banner_position)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      locked: msg.locked,
      heading_measured: msg.heading_measured,
      corridor_heading: msg.corridor_heading,
      banner_position: geometry_msgs::msg::Point::from_rmw_message(msg.banner_position),
    }
  }
}


// Corresponds to mission_interfaces__action__AlignBanner_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AlignBanner_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_Feedback {
  type RmwMsg = super::action::rmw::AlignBanner_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        iteration: msg.iteration,
        error_px: msg.error_px,
        partial: msg.partial,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      iteration: msg.iteration,
      error_px: msg.error_px,
      partial: msg.partial,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      iteration: msg.iteration,
      error_px: msg.error_px,
      partial: msg.partial,
    }
  }
}


// Corresponds to mission_interfaces__action__AlignBanner_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::AlignBanner_Feedback,

}



impl Default for AlignBanner_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AlignBanner_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_FeedbackMessage {
  type RmwMsg = super::action::rmw::AlignBanner_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::AlignBanner_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::AlignBanner_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::AlignBanner_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to mission_interfaces__action__TraverseCorridor_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_Goal {
    /// local NED x, y of the corridor entrance (banner); z ignored
    pub entry: geometry_msgs::msg::Point,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TraverseCorridor_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_Goal {
  type RmwMsg = super::action::rmw::TraverseCorridor_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entry: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.entry)).into_owned(),
        heading: msg.heading,
        altitude_z: msg.altitude_z,
        length: msg.length,
        speed: msg.speed,
        settle_time: msg.settle_time,
        exit_altitude_z: msg.exit_altitude_z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        entry: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.entry)).into_owned(),
      heading: msg.heading,
      altitude_z: msg.altitude_z,
      length: msg.length,
      speed: msg.speed,
      settle_time: msg.settle_time,
      exit_altitude_z: msg.exit_altitude_z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      entry: geometry_msgs::msg::Point::from_rmw_message(msg.entry),
      heading: msg.heading,
      altitude_z: msg.altitude_z,
      length: msg.length,
      speed: msg.speed,
      settle_time: msg.settle_time,
      exit_altitude_z: msg.exit_altitude_z,
    }
  }
}


// Corresponds to mission_interfaces__action__TraverseCorridor_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// where the vehicle is when the action ends (after the climb)
    pub exit_position: geometry_msgs::msg::Point,

}



impl Default for TraverseCorridor_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TraverseCorridor_Result::default())
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_Result {
  type RmwMsg = super::action::rmw::TraverseCorridor_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        exit_position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.exit_position)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        exit_position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.exit_position)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      exit_position: geometry_msgs::msg::Point::from_rmw_message(msg.exit_position),
    }
  }
}


// Corresponds to mission_interfaces__action__TraverseCorridor_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_Feedback {
    /// descending | settling | surging | climbing
    pub state: std::string::String,

}



impl Default for TraverseCorridor_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TraverseCorridor_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_Feedback {
  type RmwMsg = super::action::rmw::TraverseCorridor_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state.to_string(),
    }
  }
}


// Corresponds to mission_interfaces__action__TraverseCorridor_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::TraverseCorridor_Feedback,

}



impl Default for TraverseCorridor_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TraverseCorridor_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_FeedbackMessage {
  type RmwMsg = super::action::rmw::TraverseCorridor_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::TraverseCorridor_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::TraverseCorridor_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::TraverseCorridor_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to mission_interfaces__action__SearchTarget_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_Goal {
    /// text file, one "lat,lon" corner of the delivery zone per line
    pub geofence_file: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchTarget_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_Goal {
  type RmwMsg = super::action::rmw::SearchTarget_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        geofence_file: msg.geofence_file.as_str().into(),
        altitude: msg.altitude,
        yaw: msg.yaw,
        wall_margin: msg.wall_margin,
        overlap: msg.overlap,
        rows: msg.rows,
        speed: msg.speed,
        red_zone_margin: msg.red_zone_margin,
        confirm_matches: msg.confirm_matches,
        max_revisits: msg.max_revisits,
        revisit_time: msg.revisit_time,
        skip_fly_to_target: msg.skip_fly_to_target,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        geofence_file: msg.geofence_file.as_str().into(),
      altitude: msg.altitude,
      yaw: msg.yaw,
      wall_margin: msg.wall_margin,
      overlap: msg.overlap,
      rows: msg.rows,
      speed: msg.speed,
      red_zone_margin: msg.red_zone_margin,
      confirm_matches: msg.confirm_matches,
      max_revisits: msg.max_revisits,
      revisit_time: msg.revisit_time,
      skip_fly_to_target: msg.skip_fly_to_target,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      geofence_file: msg.geofence_file.to_string(),
      altitude: msg.altitude,
      yaw: msg.yaw,
      wall_margin: msg.wall_margin,
      overlap: msg.overlap,
      rows: msg.rows,
      speed: msg.speed,
      red_zone_margin: msg.red_zone_margin,
      confirm_matches: msg.confirm_matches,
      max_revisits: msg.max_revisits,
      revisit_time: msg.revisit_time,
      skip_fly_to_target: msg.skip_fly_to_target,
    }
  }
}


// Corresponds to mission_interfaces__action__SearchTarget_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// true = matched QR; false = best candidate
    pub matched: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub score: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub decoded_text: std::string::String,

    /// local NED of the chosen QR (z = the search altitude's NED z)
    pub target: geometry_msgs::msg::Point,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchTarget_Result::default())
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_Result {
  type RmwMsg = super::action::rmw::SearchTarget_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        matched: msg.matched,
        score: msg.score,
        decoded_text: msg.decoded_text.as_str().into(),
        target: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.target)).into_owned(),
        latitude: msg.latitude,
        longitude: msg.longitude,
        red_zones: msg.red_zones,
        coverage: msg.coverage,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      matched: msg.matched,
      score: msg.score,
        decoded_text: msg.decoded_text.as_str().into(),
        target: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target)).into_owned(),
      latitude: msg.latitude,
      longitude: msg.longitude,
      red_zones: msg.red_zones,
      coverage: msg.coverage,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      matched: msg.matched,
      score: msg.score,
      decoded_text: msg.decoded_text.to_string(),
      target: geometry_msgs::msg::Point::from_rmw_message(msg.target),
      latitude: msg.latitude,
      longitude: msg.longitude,
      red_zones: msg.red_zones,
      coverage: msg.coverage,
    }
  }
}


// Corresponds to mission_interfaces__action__SearchTarget_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,

    /// direct | detour | escape | blocked
    pub steering: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub best_score: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub red_zones: u16,

}



impl Default for SearchTarget_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchTarget_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_Feedback {
  type RmwMsg = super::action::rmw::SearchTarget_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
        steering: msg.steering.as_str().into(),
        best_score: msg.best_score,
        red_zones: msg.red_zones,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
        steering: msg.steering.as_str().into(),
      best_score: msg.best_score,
      red_zones: msg.red_zones,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state.to_string(),
      steering: msg.steering.to_string(),
      best_score: msg.best_score,
      red_zones: msg.red_zones,
    }
  }
}


// Corresponds to mission_interfaces__action__SearchTarget_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::SearchTarget_Feedback,

}



impl Default for SearchTarget_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchTarget_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_FeedbackMessage {
  type RmwMsg = super::action::rmw::SearchTarget_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::SearchTarget_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::SearchTarget_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::SearchTarget_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to mission_interfaces__action__SafeGoto_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_Goal {
    /// local NED
    pub target: geometry_msgs::msg::Point,

    /// rad; NaN = keep
    pub yaw: f32,

    /// m/s; <= 0 = default
    pub speed: f32,

}



impl Default for SafeGoto_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SafeGoto_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_Goal {
  type RmwMsg = super::action::rmw::SafeGoto_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.target)).into_owned(),
        yaw: msg.yaw,
        speed: msg.speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target)).into_owned(),
      yaw: msg.yaw,
      speed: msg.speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target: geometry_msgs::msg::Point::from_rmw_message(msg.target),
      yaw: msg.yaw,
      speed: msg.speed,
    }
  }
}


// Corresponds to mission_interfaces__action__SafeGoto_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detoured: bool,

}



impl Default for SafeGoto_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SafeGoto_Result::default())
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_Result {
  type RmwMsg = super::action::rmw::SafeGoto_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        detoured: msg.detoured,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      detoured: msg.detoured,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      detoured: msg.detoured,
    }
  }
}


// Corresponds to mission_interfaces__action__SafeGoto_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub steering: std::string::String,

}



impl Default for SafeGoto_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SafeGoto_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_Feedback {
  type RmwMsg = super::action::rmw::SafeGoto_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        steering: msg.steering.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        steering: msg.steering.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      steering: msg.steering.to_string(),
    }
  }
}


// Corresponds to mission_interfaces__action__SafeGoto_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::SafeGoto_Feedback,

}



impl Default for SafeGoto_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SafeGoto_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_FeedbackMessage {
  type RmwMsg = super::action::rmw::SafeGoto_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::SafeGoto_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::SafeGoto_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::SafeGoto_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to mission_interfaces__action__LawnmowerSearch_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_Goal {
    /// local NED of the first row's start; z = search altitude (NED z)
    pub start: geometry_msgs::msg::Point,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LawnmowerSearch_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_Goal {
  type RmwMsg = super::action::rmw::LawnmowerSearch_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.start)).into_owned(),
        heading: msg.heading,
        length: msg.length,
        row_step: msg.row_step,
        rows: msg.rows,
        speed: msg.speed,
        waypoint_tolerance: msg.waypoint_tolerance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start)).into_owned(),
      heading: msg.heading,
      length: msg.length,
      row_step: msg.row_step,
      rows: msg.rows,
      speed: msg.speed,
      waypoint_tolerance: msg.waypoint_tolerance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      start: geometry_msgs::msg::Point::from_rmw_message(msg.start),
      heading: msg.heading,
      length: msg.length,
      row_step: msg.row_step,
      rows: msg.rows,
      speed: msg.speed,
      waypoint_tolerance: msg.waypoint_tolerance,
    }
  }
}


// Corresponds to mission_interfaces__action__LawnmowerSearch_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_Result {
    /// true = matched QR found
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// local NED of the matched QR centre, z = start.z
    pub target: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub decoded_text: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub score: f32,

}



impl Default for LawnmowerSearch_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LawnmowerSearch_Result::default())
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_Result {
  type RmwMsg = super::action::rmw::LawnmowerSearch_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        target: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.target)).into_owned(),
        decoded_text: msg.decoded_text.as_str().into(),
        score: msg.score,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        target: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target)).into_owned(),
        decoded_text: msg.decoded_text.as_str().into(),
      score: msg.score,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      target: geometry_msgs::msg::Point::from_rmw_message(msg.target),
      decoded_text: msg.decoded_text.to_string(),
      score: msg.score,
    }
  }
}


// Corresponds to mission_interfaces__action__LawnmowerSearch_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoint: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,

}



impl Default for LawnmowerSearch_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LawnmowerSearch_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_Feedback {
  type RmwMsg = super::action::rmw::LawnmowerSearch_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        waypoint: msg.waypoint,
        state: msg.state.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      waypoint: msg.waypoint,
        state: msg.state.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      waypoint: msg.waypoint,
      state: msg.state.to_string(),
    }
  }
}


// Corresponds to mission_interfaces__action__LawnmowerSearch_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::LawnmowerSearch_Feedback,

}



impl Default for LawnmowerSearch_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LawnmowerSearch_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_FeedbackMessage {
  type RmwMsg = super::action::rmw::LawnmowerSearch_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::LawnmowerSearch_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::LawnmowerSearch_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::LawnmowerSearch_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to mission_interfaces__action__CenterOnQr_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_Goal {
    /// local NED
    pub target: geometry_msgs::msg::Point,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CenterOnQr_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_Goal {
  type RmwMsg = super::action::rmw::CenterOnQr_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.target)).into_owned(),
        yaw: msg.yaw,
        max_iters: msg.max_iters,
        tol_px: msg.tol_px,
        gain: msg.gain,
        approach_tolerance: msg.approach_tolerance,
        hold_time: msg.hold_time,
        hold_gain: msg.hold_gain,
        any_qr: msg.any_qr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target)).into_owned(),
      yaw: msg.yaw,
      max_iters: msg.max_iters,
      tol_px: msg.tol_px,
      gain: msg.gain,
      approach_tolerance: msg.approach_tolerance,
      hold_time: msg.hold_time,
      hold_gain: msg.hold_gain,
      any_qr: msg.any_qr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target: geometry_msgs::msg::Point::from_rmw_message(msg.target),
      yaw: msg.yaw,
      max_iters: msg.max_iters,
      tol_px: msg.tol_px,
      gain: msg.gain,
      approach_tolerance: msg.approach_tolerance,
      hold_time: msg.hold_time,
      hold_gain: msg.hold_gain,
      any_qr: msg.any_qr,
    }
  }
}


// Corresponds to mission_interfaces__action__CenterOnQr_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_Result {
    /// true = the hold was completed (centred or not)
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// centred within tol_px
    pub locked: bool,

    /// final setpoint
    pub position: geometry_msgs::msg::Point,

}



impl Default for CenterOnQr_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CenterOnQr_Result::default())
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_Result {
  type RmwMsg = super::action::rmw::CenterOnQr_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        locked: msg.locked,
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      locked: msg.locked,
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      locked: msg.locked,
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
    }
  }
}


// Corresponds to mission_interfaces__action__CenterOnQr_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CenterOnQr_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_Feedback {
  type RmwMsg = super::action::rmw::CenterOnQr_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        iteration: msg.iteration,
        error_px: msg.error_px,
        hold_remaining: msg.hold_remaining,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      iteration: msg.iteration,
      error_px: msg.error_px,
      hold_remaining: msg.hold_remaining,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      iteration: msg.iteration,
      error_px: msg.error_px,
      hold_remaining: msg.hold_remaining,
    }
  }
}


// Corresponds to mission_interfaces__action__CenterOnQr_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::CenterOnQr_Feedback,

}



impl Default for CenterOnQr_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CenterOnQr_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_FeedbackMessage {
  type RmwMsg = super::action::rmw::CenterOnQr_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::CenterOnQr_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::CenterOnQr_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::CenterOnQr_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to mission_interfaces__action__NavigateToTarget_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToTarget_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_Goal {
  type RmwMsg = super::action::rmw::NavigateToTarget_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        latitude: msg.latitude,
        longitude: msg.longitude,
        z: msg.z,
        yaw: msg.yaw,
        speed: msg.speed,
        tolerance: msg.tolerance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      latitude: msg.latitude,
      longitude: msg.longitude,
      z: msg.z,
      yaw: msg.yaw,
      speed: msg.speed,
      tolerance: msg.tolerance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      latitude: msg.latitude,
      longitude: msg.longitude,
      z: msg.z,
      yaw: msg.yaw,
      speed: msg.speed,
      tolerance: msg.tolerance,
    }
  }
}


// Corresponds to mission_interfaces__action__NavigateToTarget_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// the waypoint in local NED
    pub target: geometry_msgs::msg::Point,

    /// vehicle position on arrival
    pub position: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detoured: bool,

}



impl Default for NavigateToTarget_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToTarget_Result::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_Result {
  type RmwMsg = super::action::rmw::NavigateToTarget_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        target: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.target)).into_owned(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        detoured: msg.detoured,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        target: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target)).into_owned(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
      detoured: msg.detoured,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      target: geometry_msgs::msg::Point::from_rmw_message(msg.target),
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      detoured: msg.detoured,
    }
  }
}


// Corresponds to mission_interfaces__action__NavigateToTarget_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,

    /// m to the waypoint
    pub distance: f32,

}



impl Default for NavigateToTarget_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToTarget_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_Feedback {
  type RmwMsg = super::action::rmw::NavigateToTarget_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
        distance: msg.distance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
      distance: msg.distance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state.to_string(),
      distance: msg.distance,
    }
  }
}


// Corresponds to mission_interfaces__action__NavigateToTarget_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::NavigateToTarget_Feedback,

}



impl Default for NavigateToTarget_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToTarget_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_FeedbackMessage {
  type RmwMsg = super::action::rmw::NavigateToTarget_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::NavigateToTarget_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::NavigateToTarget_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::NavigateToTarget_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to mission_interfaces__action__PayloadDrop_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PayloadDrop_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_Goal {
  type RmwMsg = super::action::rmw::PayloadDrop_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        channel: msg.channel,
        open_pwm: msg.open_pwm,
        close_pwm: msg.close_pwm,
        interval: msg.interval,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      channel: msg.channel,
      open_pwm: msg.open_pwm,
      close_pwm: msg.close_pwm,
      interval: msg.interval,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      channel: msg.channel,
      open_pwm: msg.open_pwm,
      close_pwm: msg.close_pwm,
      interval: msg.interval,
    }
  }
}


// Corresponds to mission_interfaces__action__PayloadDrop_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub payloads_delivered: u16,

}



impl Default for PayloadDrop_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PayloadDrop_Result::default())
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_Result {
  type RmwMsg = super::action::rmw::PayloadDrop_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        payloads_delivered: msg.payloads_delivered,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      payloads_delivered: msg.payloads_delivered,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      payloads_delivered: msg.payloads_delivered,
    }
  }
}


// Corresponds to mission_interfaces__action__PayloadDrop_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,

}



impl Default for PayloadDrop_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PayloadDrop_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_Feedback {
  type RmwMsg = super::action::rmw::PayloadDrop_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state.to_string(),
    }
  }
}


// Corresponds to mission_interfaces__action__PayloadDrop_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::PayloadDrop_Feedback,

}



impl Default for PayloadDrop_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PayloadDrop_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_FeedbackMessage {
  type RmwMsg = super::action::rmw::PayloadDrop_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::PayloadDrop_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::PayloadDrop_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::PayloadDrop_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to mission_interfaces__action__Takeoff_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::Takeoff_Goal,

}



impl Default for Takeoff_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Takeoff_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Takeoff_SendGoal_Request {
  type RmwMsg = super::action::rmw::Takeoff_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::Takeoff_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::Takeoff_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::Takeoff_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__Takeoff_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for Takeoff_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Takeoff_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Takeoff_SendGoal_Response {
  type RmwMsg = super::action::rmw::Takeoff_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__Takeoff_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for Takeoff_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Takeoff_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Takeoff_GetResult_Request {
  type RmwMsg = super::action::rmw::Takeoff_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__Takeoff_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Takeoff_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::Takeoff_Result,

}



impl Default for Takeoff_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Takeoff_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Takeoff_GetResult_Response {
  type RmwMsg = super::action::rmw::Takeoff_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::Takeoff_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::Takeoff_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::Takeoff_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to mission_interfaces__action__GoTo_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::GoTo_Goal,

}



impl Default for GoTo_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GoTo_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GoTo_SendGoal_Request {
  type RmwMsg = super::action::rmw::GoTo_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::GoTo_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::GoTo_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::GoTo_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__GoTo_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for GoTo_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GoTo_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GoTo_SendGoal_Response {
  type RmwMsg = super::action::rmw::GoTo_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__GoTo_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for GoTo_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GoTo_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GoTo_GetResult_Request {
  type RmwMsg = super::action::rmw::GoTo_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__GoTo_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoTo_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::GoTo_Result,

}



impl Default for GoTo_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GoTo_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GoTo_GetResult_Response {
  type RmwMsg = super::action::rmw::GoTo_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::GoTo_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::GoTo_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::GoTo_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to mission_interfaces__action__Land_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::Land_Goal,

}



impl Default for Land_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Land_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Land_SendGoal_Request {
  type RmwMsg = super::action::rmw::Land_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::Land_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::Land_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::Land_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__Land_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for Land_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Land_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Land_SendGoal_Response {
  type RmwMsg = super::action::rmw::Land_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__Land_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for Land_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Land_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Land_GetResult_Request {
  type RmwMsg = super::action::rmw::Land_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__Land_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Land_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::Land_Result,

}



impl Default for Land_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Land_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Land_GetResult_Response {
  type RmwMsg = super::action::rmw::Land_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::Land_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::Land_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::Land_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to mission_interfaces__action__CaptureReference_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::CaptureReference_Goal,

}



impl Default for CaptureReference_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CaptureReference_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_SendGoal_Request {
  type RmwMsg = super::action::rmw::CaptureReference_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::CaptureReference_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::CaptureReference_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::CaptureReference_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__CaptureReference_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for CaptureReference_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CaptureReference_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_SendGoal_Response {
  type RmwMsg = super::action::rmw::CaptureReference_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__CaptureReference_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for CaptureReference_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CaptureReference_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_GetResult_Request {
  type RmwMsg = super::action::rmw::CaptureReference_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__CaptureReference_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureReference_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::CaptureReference_Result,

}



impl Default for CaptureReference_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CaptureReference_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureReference_GetResult_Response {
  type RmwMsg = super::action::rmw::CaptureReference_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::CaptureReference_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::CaptureReference_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::CaptureReference_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to mission_interfaces__action__SearchBanner_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::SearchBanner_Goal,

}



impl Default for SearchBanner_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchBanner_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_SendGoal_Request {
  type RmwMsg = super::action::rmw::SearchBanner_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::SearchBanner_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::SearchBanner_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::SearchBanner_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__SearchBanner_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for SearchBanner_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchBanner_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_SendGoal_Response {
  type RmwMsg = super::action::rmw::SearchBanner_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__SearchBanner_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for SearchBanner_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchBanner_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_GetResult_Request {
  type RmwMsg = super::action::rmw::SearchBanner_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__SearchBanner_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchBanner_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::SearchBanner_Result,

}



impl Default for SearchBanner_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchBanner_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SearchBanner_GetResult_Response {
  type RmwMsg = super::action::rmw::SearchBanner_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::SearchBanner_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::SearchBanner_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::SearchBanner_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to mission_interfaces__action__AlignBanner_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::AlignBanner_Goal,

}



impl Default for AlignBanner_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AlignBanner_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_SendGoal_Request {
  type RmwMsg = super::action::rmw::AlignBanner_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::AlignBanner_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::AlignBanner_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::AlignBanner_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__AlignBanner_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for AlignBanner_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AlignBanner_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_SendGoal_Response {
  type RmwMsg = super::action::rmw::AlignBanner_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__AlignBanner_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for AlignBanner_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AlignBanner_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_GetResult_Request {
  type RmwMsg = super::action::rmw::AlignBanner_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__AlignBanner_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlignBanner_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::AlignBanner_Result,

}



impl Default for AlignBanner_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AlignBanner_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AlignBanner_GetResult_Response {
  type RmwMsg = super::action::rmw::AlignBanner_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::AlignBanner_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::AlignBanner_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::AlignBanner_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to mission_interfaces__action__TraverseCorridor_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::TraverseCorridor_Goal,

}



impl Default for TraverseCorridor_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TraverseCorridor_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_SendGoal_Request {
  type RmwMsg = super::action::rmw::TraverseCorridor_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::TraverseCorridor_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::TraverseCorridor_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::TraverseCorridor_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__TraverseCorridor_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for TraverseCorridor_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TraverseCorridor_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_SendGoal_Response {
  type RmwMsg = super::action::rmw::TraverseCorridor_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__TraverseCorridor_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for TraverseCorridor_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TraverseCorridor_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_GetResult_Request {
  type RmwMsg = super::action::rmw::TraverseCorridor_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__TraverseCorridor_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TraverseCorridor_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::TraverseCorridor_Result,

}



impl Default for TraverseCorridor_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::TraverseCorridor_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TraverseCorridor_GetResult_Response {
  type RmwMsg = super::action::rmw::TraverseCorridor_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::TraverseCorridor_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::TraverseCorridor_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::TraverseCorridor_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to mission_interfaces__action__SearchTarget_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::SearchTarget_Goal,

}



impl Default for SearchTarget_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchTarget_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_SendGoal_Request {
  type RmwMsg = super::action::rmw::SearchTarget_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::SearchTarget_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::SearchTarget_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::SearchTarget_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__SearchTarget_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for SearchTarget_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchTarget_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_SendGoal_Response {
  type RmwMsg = super::action::rmw::SearchTarget_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__SearchTarget_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for SearchTarget_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchTarget_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_GetResult_Request {
  type RmwMsg = super::action::rmw::SearchTarget_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__SearchTarget_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchTarget_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::SearchTarget_Result,

}



impl Default for SearchTarget_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SearchTarget_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SearchTarget_GetResult_Response {
  type RmwMsg = super::action::rmw::SearchTarget_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::SearchTarget_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::SearchTarget_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::SearchTarget_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to mission_interfaces__action__SafeGoto_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::SafeGoto_Goal,

}



impl Default for SafeGoto_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SafeGoto_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_SendGoal_Request {
  type RmwMsg = super::action::rmw::SafeGoto_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::SafeGoto_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::SafeGoto_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::SafeGoto_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__SafeGoto_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for SafeGoto_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SafeGoto_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_SendGoal_Response {
  type RmwMsg = super::action::rmw::SafeGoto_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__SafeGoto_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for SafeGoto_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SafeGoto_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_GetResult_Request {
  type RmwMsg = super::action::rmw::SafeGoto_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__SafeGoto_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafeGoto_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::SafeGoto_Result,

}



impl Default for SafeGoto_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SafeGoto_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SafeGoto_GetResult_Response {
  type RmwMsg = super::action::rmw::SafeGoto_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::SafeGoto_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::SafeGoto_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::SafeGoto_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to mission_interfaces__action__LawnmowerSearch_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::LawnmowerSearch_Goal,

}



impl Default for LawnmowerSearch_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LawnmowerSearch_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_SendGoal_Request {
  type RmwMsg = super::action::rmw::LawnmowerSearch_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::LawnmowerSearch_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::LawnmowerSearch_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::LawnmowerSearch_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__LawnmowerSearch_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for LawnmowerSearch_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LawnmowerSearch_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_SendGoal_Response {
  type RmwMsg = super::action::rmw::LawnmowerSearch_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__LawnmowerSearch_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for LawnmowerSearch_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LawnmowerSearch_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_GetResult_Request {
  type RmwMsg = super::action::rmw::LawnmowerSearch_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__LawnmowerSearch_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LawnmowerSearch_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::LawnmowerSearch_Result,

}



impl Default for LawnmowerSearch_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LawnmowerSearch_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for LawnmowerSearch_GetResult_Response {
  type RmwMsg = super::action::rmw::LawnmowerSearch_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::LawnmowerSearch_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::LawnmowerSearch_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::LawnmowerSearch_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to mission_interfaces__action__CenterOnQr_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::CenterOnQr_Goal,

}



impl Default for CenterOnQr_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CenterOnQr_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_SendGoal_Request {
  type RmwMsg = super::action::rmw::CenterOnQr_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::CenterOnQr_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::CenterOnQr_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::CenterOnQr_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__CenterOnQr_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for CenterOnQr_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CenterOnQr_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_SendGoal_Response {
  type RmwMsg = super::action::rmw::CenterOnQr_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__CenterOnQr_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for CenterOnQr_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CenterOnQr_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_GetResult_Request {
  type RmwMsg = super::action::rmw::CenterOnQr_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__CenterOnQr_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CenterOnQr_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::CenterOnQr_Result,

}



impl Default for CenterOnQr_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CenterOnQr_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CenterOnQr_GetResult_Response {
  type RmwMsg = super::action::rmw::CenterOnQr_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::CenterOnQr_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::CenterOnQr_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::CenterOnQr_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to mission_interfaces__action__NavigateToTarget_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::NavigateToTarget_Goal,

}



impl Default for NavigateToTarget_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToTarget_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_SendGoal_Request {
  type RmwMsg = super::action::rmw::NavigateToTarget_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::NavigateToTarget_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::NavigateToTarget_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::NavigateToTarget_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__NavigateToTarget_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for NavigateToTarget_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToTarget_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_SendGoal_Response {
  type RmwMsg = super::action::rmw::NavigateToTarget_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__NavigateToTarget_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for NavigateToTarget_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToTarget_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_GetResult_Request {
  type RmwMsg = super::action::rmw::NavigateToTarget_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__NavigateToTarget_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToTarget_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::NavigateToTarget_Result,

}



impl Default for NavigateToTarget_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToTarget_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToTarget_GetResult_Response {
  type RmwMsg = super::action::rmw::NavigateToTarget_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::NavigateToTarget_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::NavigateToTarget_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::NavigateToTarget_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to mission_interfaces__action__PayloadDrop_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::PayloadDrop_Goal,

}



impl Default for PayloadDrop_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PayloadDrop_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_SendGoal_Request {
  type RmwMsg = super::action::rmw::PayloadDrop_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::PayloadDrop_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::PayloadDrop_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::PayloadDrop_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to mission_interfaces__action__PayloadDrop_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for PayloadDrop_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PayloadDrop_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_SendGoal_Response {
  type RmwMsg = super::action::rmw::PayloadDrop_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to mission_interfaces__action__PayloadDrop_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for PayloadDrop_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PayloadDrop_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_GetResult_Request {
  type RmwMsg = super::action::rmw::PayloadDrop_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to mission_interfaces__action__PayloadDrop_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PayloadDrop_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::PayloadDrop_Result,

}



impl Default for PayloadDrop_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PayloadDrop_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PayloadDrop_GetResult_Response {
  type RmwMsg = super::action::rmw::PayloadDrop_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::PayloadDrop_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::PayloadDrop_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::PayloadDrop_Result::from_rmw_message(msg.result),
    }
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






#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__Takeoff() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__Takeoff
#[allow(missing_docs, non_camel_case_types)]
pub struct Takeoff;

impl rosidl_runtime_rs::Action for Takeoff {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = Takeoff_Goal;

  /// The result message defined in the action definition.
  type Result = Takeoff_Result;

  /// The feedback message defined in the action definition.
  type Feedback = Takeoff_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::Takeoff_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::Takeoff_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::Takeoff_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__Takeoff() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::Takeoff_Goal,
  ) -> super::action::rmw::Takeoff_SendGoal_Request {
   super::action::rmw::Takeoff_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::Takeoff_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::Takeoff_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::Takeoff_SendGoal_Response {
   super::action::rmw::Takeoff_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::Takeoff_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::Takeoff_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::Takeoff_Feedback,
  ) -> super::action::rmw::Takeoff_FeedbackMessage {
    let mut message = super::action::rmw::Takeoff_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::Takeoff_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::Takeoff_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::Takeoff_GetResult_Request {
   super::action::rmw::Takeoff_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::Takeoff_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::Takeoff_Result,
  ) -> super::action::rmw::Takeoff_GetResult_Response {
   super::action::rmw::Takeoff_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::Takeoff_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::Takeoff_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__GoTo() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__GoTo
#[allow(missing_docs, non_camel_case_types)]
pub struct GoTo;

impl rosidl_runtime_rs::Action for GoTo {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = GoTo_Goal;

  /// The result message defined in the action definition.
  type Result = GoTo_Result;

  /// The feedback message defined in the action definition.
  type Feedback = GoTo_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::GoTo_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::GoTo_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::GoTo_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__GoTo() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::GoTo_Goal,
  ) -> super::action::rmw::GoTo_SendGoal_Request {
   super::action::rmw::GoTo_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::GoTo_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::GoTo_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::GoTo_SendGoal_Response {
   super::action::rmw::GoTo_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::GoTo_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::GoTo_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::GoTo_Feedback,
  ) -> super::action::rmw::GoTo_FeedbackMessage {
    let mut message = super::action::rmw::GoTo_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::GoTo_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::GoTo_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::GoTo_GetResult_Request {
   super::action::rmw::GoTo_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::GoTo_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::GoTo_Result,
  ) -> super::action::rmw::GoTo_GetResult_Response {
   super::action::rmw::GoTo_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::GoTo_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::GoTo_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__Land() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__Land
#[allow(missing_docs, non_camel_case_types)]
pub struct Land;

impl rosidl_runtime_rs::Action for Land {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = Land_Goal;

  /// The result message defined in the action definition.
  type Result = Land_Result;

  /// The feedback message defined in the action definition.
  type Feedback = Land_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::Land_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::Land_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::Land_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__Land() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::Land_Goal,
  ) -> super::action::rmw::Land_SendGoal_Request {
   super::action::rmw::Land_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::Land_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::Land_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::Land_SendGoal_Response {
   super::action::rmw::Land_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::Land_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::Land_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::Land_Feedback,
  ) -> super::action::rmw::Land_FeedbackMessage {
    let mut message = super::action::rmw::Land_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::Land_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::Land_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::Land_GetResult_Request {
   super::action::rmw::Land_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::Land_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::Land_Result,
  ) -> super::action::rmw::Land_GetResult_Response {
   super::action::rmw::Land_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::Land_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::Land_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__CaptureReference() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__CaptureReference
#[allow(missing_docs, non_camel_case_types)]
pub struct CaptureReference;

impl rosidl_runtime_rs::Action for CaptureReference {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = CaptureReference_Goal;

  /// The result message defined in the action definition.
  type Result = CaptureReference_Result;

  /// The feedback message defined in the action definition.
  type Feedback = CaptureReference_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::CaptureReference_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::CaptureReference_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::CaptureReference_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__CaptureReference() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::CaptureReference_Goal,
  ) -> super::action::rmw::CaptureReference_SendGoal_Request {
   super::action::rmw::CaptureReference_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::CaptureReference_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::CaptureReference_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::CaptureReference_SendGoal_Response {
   super::action::rmw::CaptureReference_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::CaptureReference_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::CaptureReference_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::CaptureReference_Feedback,
  ) -> super::action::rmw::CaptureReference_FeedbackMessage {
    let mut message = super::action::rmw::CaptureReference_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::CaptureReference_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::CaptureReference_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::CaptureReference_GetResult_Request {
   super::action::rmw::CaptureReference_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::CaptureReference_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::CaptureReference_Result,
  ) -> super::action::rmw::CaptureReference_GetResult_Response {
   super::action::rmw::CaptureReference_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::CaptureReference_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::CaptureReference_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__SearchBanner() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__SearchBanner
#[allow(missing_docs, non_camel_case_types)]
pub struct SearchBanner;

impl rosidl_runtime_rs::Action for SearchBanner {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = SearchBanner_Goal;

  /// The result message defined in the action definition.
  type Result = SearchBanner_Result;

  /// The feedback message defined in the action definition.
  type Feedback = SearchBanner_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::SearchBanner_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::SearchBanner_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::SearchBanner_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__SearchBanner() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::SearchBanner_Goal,
  ) -> super::action::rmw::SearchBanner_SendGoal_Request {
   super::action::rmw::SearchBanner_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::SearchBanner_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::SearchBanner_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::SearchBanner_SendGoal_Response {
   super::action::rmw::SearchBanner_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::SearchBanner_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::SearchBanner_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::SearchBanner_Feedback,
  ) -> super::action::rmw::SearchBanner_FeedbackMessage {
    let mut message = super::action::rmw::SearchBanner_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::SearchBanner_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::SearchBanner_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::SearchBanner_GetResult_Request {
   super::action::rmw::SearchBanner_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::SearchBanner_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::SearchBanner_Result,
  ) -> super::action::rmw::SearchBanner_GetResult_Response {
   super::action::rmw::SearchBanner_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::SearchBanner_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::SearchBanner_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__AlignBanner() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__AlignBanner
#[allow(missing_docs, non_camel_case_types)]
pub struct AlignBanner;

impl rosidl_runtime_rs::Action for AlignBanner {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = AlignBanner_Goal;

  /// The result message defined in the action definition.
  type Result = AlignBanner_Result;

  /// The feedback message defined in the action definition.
  type Feedback = AlignBanner_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::AlignBanner_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::AlignBanner_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::AlignBanner_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__AlignBanner() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::AlignBanner_Goal,
  ) -> super::action::rmw::AlignBanner_SendGoal_Request {
   super::action::rmw::AlignBanner_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::AlignBanner_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::AlignBanner_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::AlignBanner_SendGoal_Response {
   super::action::rmw::AlignBanner_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::AlignBanner_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::AlignBanner_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::AlignBanner_Feedback,
  ) -> super::action::rmw::AlignBanner_FeedbackMessage {
    let mut message = super::action::rmw::AlignBanner_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::AlignBanner_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::AlignBanner_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::AlignBanner_GetResult_Request {
   super::action::rmw::AlignBanner_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::AlignBanner_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::AlignBanner_Result,
  ) -> super::action::rmw::AlignBanner_GetResult_Response {
   super::action::rmw::AlignBanner_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::AlignBanner_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::AlignBanner_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__TraverseCorridor() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__TraverseCorridor
#[allow(missing_docs, non_camel_case_types)]
pub struct TraverseCorridor;

impl rosidl_runtime_rs::Action for TraverseCorridor {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = TraverseCorridor_Goal;

  /// The result message defined in the action definition.
  type Result = TraverseCorridor_Result;

  /// The feedback message defined in the action definition.
  type Feedback = TraverseCorridor_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::TraverseCorridor_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::TraverseCorridor_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::TraverseCorridor_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__TraverseCorridor() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::TraverseCorridor_Goal,
  ) -> super::action::rmw::TraverseCorridor_SendGoal_Request {
   super::action::rmw::TraverseCorridor_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::TraverseCorridor_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::TraverseCorridor_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::TraverseCorridor_SendGoal_Response {
   super::action::rmw::TraverseCorridor_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::TraverseCorridor_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::TraverseCorridor_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::TraverseCorridor_Feedback,
  ) -> super::action::rmw::TraverseCorridor_FeedbackMessage {
    let mut message = super::action::rmw::TraverseCorridor_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::TraverseCorridor_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::TraverseCorridor_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::TraverseCorridor_GetResult_Request {
   super::action::rmw::TraverseCorridor_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::TraverseCorridor_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::TraverseCorridor_Result,
  ) -> super::action::rmw::TraverseCorridor_GetResult_Response {
   super::action::rmw::TraverseCorridor_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::TraverseCorridor_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::TraverseCorridor_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__SearchTarget() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__SearchTarget
#[allow(missing_docs, non_camel_case_types)]
pub struct SearchTarget;

impl rosidl_runtime_rs::Action for SearchTarget {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = SearchTarget_Goal;

  /// The result message defined in the action definition.
  type Result = SearchTarget_Result;

  /// The feedback message defined in the action definition.
  type Feedback = SearchTarget_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::SearchTarget_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::SearchTarget_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::SearchTarget_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__SearchTarget() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::SearchTarget_Goal,
  ) -> super::action::rmw::SearchTarget_SendGoal_Request {
   super::action::rmw::SearchTarget_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::SearchTarget_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::SearchTarget_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::SearchTarget_SendGoal_Response {
   super::action::rmw::SearchTarget_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::SearchTarget_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::SearchTarget_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::SearchTarget_Feedback,
  ) -> super::action::rmw::SearchTarget_FeedbackMessage {
    let mut message = super::action::rmw::SearchTarget_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::SearchTarget_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::SearchTarget_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::SearchTarget_GetResult_Request {
   super::action::rmw::SearchTarget_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::SearchTarget_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::SearchTarget_Result,
  ) -> super::action::rmw::SearchTarget_GetResult_Response {
   super::action::rmw::SearchTarget_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::SearchTarget_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::SearchTarget_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__SafeGoto() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__SafeGoto
#[allow(missing_docs, non_camel_case_types)]
pub struct SafeGoto;

impl rosidl_runtime_rs::Action for SafeGoto {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = SafeGoto_Goal;

  /// The result message defined in the action definition.
  type Result = SafeGoto_Result;

  /// The feedback message defined in the action definition.
  type Feedback = SafeGoto_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::SafeGoto_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::SafeGoto_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::SafeGoto_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__SafeGoto() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::SafeGoto_Goal,
  ) -> super::action::rmw::SafeGoto_SendGoal_Request {
   super::action::rmw::SafeGoto_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::SafeGoto_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::SafeGoto_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::SafeGoto_SendGoal_Response {
   super::action::rmw::SafeGoto_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::SafeGoto_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::SafeGoto_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::SafeGoto_Feedback,
  ) -> super::action::rmw::SafeGoto_FeedbackMessage {
    let mut message = super::action::rmw::SafeGoto_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::SafeGoto_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::SafeGoto_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::SafeGoto_GetResult_Request {
   super::action::rmw::SafeGoto_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::SafeGoto_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::SafeGoto_Result,
  ) -> super::action::rmw::SafeGoto_GetResult_Response {
   super::action::rmw::SafeGoto_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::SafeGoto_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::SafeGoto_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__LawnmowerSearch() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__LawnmowerSearch
#[allow(missing_docs, non_camel_case_types)]
pub struct LawnmowerSearch;

impl rosidl_runtime_rs::Action for LawnmowerSearch {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = LawnmowerSearch_Goal;

  /// The result message defined in the action definition.
  type Result = LawnmowerSearch_Result;

  /// The feedback message defined in the action definition.
  type Feedback = LawnmowerSearch_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::LawnmowerSearch_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::LawnmowerSearch_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::LawnmowerSearch_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__LawnmowerSearch() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::LawnmowerSearch_Goal,
  ) -> super::action::rmw::LawnmowerSearch_SendGoal_Request {
   super::action::rmw::LawnmowerSearch_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::LawnmowerSearch_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::LawnmowerSearch_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::LawnmowerSearch_SendGoal_Response {
   super::action::rmw::LawnmowerSearch_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::LawnmowerSearch_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::LawnmowerSearch_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::LawnmowerSearch_Feedback,
  ) -> super::action::rmw::LawnmowerSearch_FeedbackMessage {
    let mut message = super::action::rmw::LawnmowerSearch_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::LawnmowerSearch_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::LawnmowerSearch_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::LawnmowerSearch_GetResult_Request {
   super::action::rmw::LawnmowerSearch_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::LawnmowerSearch_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::LawnmowerSearch_Result,
  ) -> super::action::rmw::LawnmowerSearch_GetResult_Response {
   super::action::rmw::LawnmowerSearch_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::LawnmowerSearch_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::LawnmowerSearch_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__CenterOnQr() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__CenterOnQr
#[allow(missing_docs, non_camel_case_types)]
pub struct CenterOnQr;

impl rosidl_runtime_rs::Action for CenterOnQr {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = CenterOnQr_Goal;

  /// The result message defined in the action definition.
  type Result = CenterOnQr_Result;

  /// The feedback message defined in the action definition.
  type Feedback = CenterOnQr_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::CenterOnQr_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::CenterOnQr_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::CenterOnQr_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__CenterOnQr() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::CenterOnQr_Goal,
  ) -> super::action::rmw::CenterOnQr_SendGoal_Request {
   super::action::rmw::CenterOnQr_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::CenterOnQr_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::CenterOnQr_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::CenterOnQr_SendGoal_Response {
   super::action::rmw::CenterOnQr_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::CenterOnQr_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::CenterOnQr_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::CenterOnQr_Feedback,
  ) -> super::action::rmw::CenterOnQr_FeedbackMessage {
    let mut message = super::action::rmw::CenterOnQr_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::CenterOnQr_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::CenterOnQr_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::CenterOnQr_GetResult_Request {
   super::action::rmw::CenterOnQr_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::CenterOnQr_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::CenterOnQr_Result,
  ) -> super::action::rmw::CenterOnQr_GetResult_Response {
   super::action::rmw::CenterOnQr_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::CenterOnQr_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::CenterOnQr_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__NavigateToTarget() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__NavigateToTarget
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateToTarget;

impl rosidl_runtime_rs::Action for NavigateToTarget {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = NavigateToTarget_Goal;

  /// The result message defined in the action definition.
  type Result = NavigateToTarget_Result;

  /// The feedback message defined in the action definition.
  type Feedback = NavigateToTarget_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::NavigateToTarget_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::NavigateToTarget_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::NavigateToTarget_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__NavigateToTarget() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::NavigateToTarget_Goal,
  ) -> super::action::rmw::NavigateToTarget_SendGoal_Request {
   super::action::rmw::NavigateToTarget_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::NavigateToTarget_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::NavigateToTarget_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::NavigateToTarget_SendGoal_Response {
   super::action::rmw::NavigateToTarget_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::NavigateToTarget_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::NavigateToTarget_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::NavigateToTarget_Feedback,
  ) -> super::action::rmw::NavigateToTarget_FeedbackMessage {
    let mut message = super::action::rmw::NavigateToTarget_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::NavigateToTarget_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::NavigateToTarget_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::NavigateToTarget_GetResult_Request {
   super::action::rmw::NavigateToTarget_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::NavigateToTarget_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::NavigateToTarget_Result,
  ) -> super::action::rmw::NavigateToTarget_GetResult_Response {
   super::action::rmw::NavigateToTarget_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::NavigateToTarget_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::NavigateToTarget_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "mission_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__PayloadDrop() -> *const std::ffi::c_void;
}

// Corresponds to mission_interfaces__action__PayloadDrop
#[allow(missing_docs, non_camel_case_types)]
pub struct PayloadDrop;

impl rosidl_runtime_rs::Action for PayloadDrop {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = PayloadDrop_Goal;

  /// The result message defined in the action definition.
  type Result = PayloadDrop_Result;

  /// The feedback message defined in the action definition.
  type Feedback = PayloadDrop_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::PayloadDrop_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::PayloadDrop_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::PayloadDrop_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__mission_interfaces__action__PayloadDrop() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::PayloadDrop_Goal,
  ) -> super::action::rmw::PayloadDrop_SendGoal_Request {
   super::action::rmw::PayloadDrop_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::PayloadDrop_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::PayloadDrop_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::PayloadDrop_SendGoal_Response {
   super::action::rmw::PayloadDrop_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::PayloadDrop_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::PayloadDrop_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::PayloadDrop_Feedback,
  ) -> super::action::rmw::PayloadDrop_FeedbackMessage {
    let mut message = super::action::rmw::PayloadDrop_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::PayloadDrop_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::PayloadDrop_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::PayloadDrop_GetResult_Request {
   super::action::rmw::PayloadDrop_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::PayloadDrop_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::PayloadDrop_Result,
  ) -> super::action::rmw::PayloadDrop_GetResult_Response {
   super::action::rmw::PayloadDrop_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::PayloadDrop_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::PayloadDrop_Result,
  ) {
    (response.status, response.result)
  }
}


