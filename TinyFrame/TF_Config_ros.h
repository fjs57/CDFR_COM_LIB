#include "TF_Config.h"

#define TF_USE_MUTEX  1

#define TF_Error(format, ...) RCLCPP_ERROR( this->get_logger(), "[TF] " format "\n", ##__VA_ARGS__)