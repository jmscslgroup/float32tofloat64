#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block float32tofloat64/Subscribe
extern SimulinkSubscriber<std_msgs::Float32, SL_Bus_float32tofloat64_std_msgs_Float32> Sub_float32tofloat64_428;

// For Block float32tofloat64/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_float32tofloat64_std_msgs_Float64> Pub_float32tofloat64_435;

void slros_node_init(int argc, char** argv);

#endif
