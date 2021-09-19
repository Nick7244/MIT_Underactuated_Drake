# Instructions for downloading and using Drake + ROS from a catkin pakage in VSCode

1. Follow the [instructions to download the drake binaries](https://underactuated.mit.edu/drake.html#section3) from the Underactuated textbook
2. Setup VSCode c_cpp_properties.json (i.e. C/C++ extension):

    Add the following to the include path for intellisense to work:
        
        "/opt/ros/melodic/include/**",
        "/usr/include/**",
        "/opt/drake/include"

3. CMake configuration:
    ```
    find_package(drake CONFIG REQUIRED PATHS /opt/drake)

    target_link_libraries(${PROJECT_NAME}_node
        ${catkin_LIBRARIES}
        drake::drake
    )
    ```

*See [drake_catkin_installed package](https://github.com/RobotLocomotion/drake-external-examples) for more info*

*See the [test_ros_drake package](https://github.com/Nick7244/MIT_Underactuated_Drake/tree/master/test_ros_drake) included in this repository for an example of a node where intellisense can find and use ROS & Drake libs*
