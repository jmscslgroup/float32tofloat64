#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "float32tofloat64";

// For Block float32tofloat64/Subscribe
SimulinkSubscriber<std_msgs::Float32, SL_Bus_float32tofloat64_std_msgs_Float32> Sub_float32tofloat64_428;

// For Block float32tofloat64/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_float32tofloat64_std_msgs_Float64> Pub_float32tofloat64_435;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

