# Instructions for downloading and using Drake + ROS with catkin pakage

1. Follow the instructions at https://underactuated.mit.edu/drake.html#section3 to download the drake binaries

2. Setup vscode c_cpp_properties.json (i.e. C/C++ extension):

    Add the following to the include path for intellisense to work:

        "/opt/ros/melodic/include/**",
        "/usr/include/**",
        "/opt/drake/include"

3. CMake configuration:

    find_package(drake CONFIG REQUIRED PATHS /opt/drake)

    target_link_libraries(${PROJECT_NAME}_node
        ${catkin_LIBRARIES}
        drake::drake
    )

*See the test_ros_drake package for an example of a node that can find ROS & Drake libs*
