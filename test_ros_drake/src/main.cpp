#include <iostream>
#include <drake/common/random.h>
#include <ros/ros.h>

int main ( int argc, char** argv )
{
    ros::init(argc, argv, "test_ros_drake");

    drake::RandomGenerator rg;
    ros::NodeHandle nh;

    double r;
    nh.getParam("rate", r);

    std::cout << "Hello World!" << std::endl;
    std::cout << "drake::RandomGenerator min: " << rg.min << ", drake::RandomGenerator max: " << rg.max << std::endl;
    std::cout << "ros::NodeHandle rate: " << r << std::endl;
    
}