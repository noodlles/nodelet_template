cmake_minimum_required(VERSION 2.8.3)
project(nodelet_template)
 
#启用c++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
 
 
# List C++ dependencies on ros packages
set(ROS_CXX_DEPENDENCIES
  roscpp
  nodelet
)
 
# Find catkin and all required ROS components
find_package(catkin REQUIRED COMPONENTS
    ${ROS_CXX_DEPENDENCIES}
    )
 
# Set include directories
include_directories(include)
include_directories(${catkin_INCLUDE_DIRS})
 
catkin_package(
  #INCLUDE_DIRS include
  #CATKIN_DEPENDS ${ROS_CXX_DEPENDENCIES}
)
 
#Create node
#add_executable(${PROJECT_NAME} src/nodeletclass.cpp)
add_library(${PROJECT_NAME} src/nodeletclass.cpp)
add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS} )
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})
