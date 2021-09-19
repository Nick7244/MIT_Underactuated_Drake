#include <iostream>
#include <drake/common/random.h>
#include <ros/ros.h>

int main ( int argc, char** argv )
{
	ros::init(argc, argv, "chapter_01");

    drake::RandomGenerator rg;
    ros::NodeHandle nh;

    std::cout << "Min: " << rg.min << ", Max: " << rg.max << std::endl;
    std::cout << "Hello World!" << std::endl;

    while(true) { }
}