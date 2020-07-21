#include "nodeletclass.h"
#include <pluginlib/class_list_macros.h>
#include <ros/ros.h>
 
nodeletclass::nodeletclass()
{
 
}
 
//重载虚函数，启动时自动调用
void nodeletclass::onInit()
{
  //输出信息
  NODELET_DEBUG("Init nodelet...");
  ROS_INFO("Nodelet is OK for test");
}
 
//nodelet的本质是把节点作为插件来调用，因此需要PLUGINLIB的宏定义、
//第一个参数是类名，第二个参数是父类
PLUGINLIB_EXPORT_CLASS(nodeletclass, nodelet::Nodelet);
