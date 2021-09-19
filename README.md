# Instructions for downloading and using Drake with catkin pakage + ROS

1. Follow the instructions at https://underactuated.mit.edu/drake.html#section3 to download the drake binaries

2. Setup vscode settings.json (MIGHT NOT ACTUALLY NEED THIS):

    "C_Cpp.intelliSenseEngineFallback": "Enabled"

3. Setup vscode c_cpp_properties.json:

    "configurations": [
        {
            "browse": {
                "databaseFilename": "",
                "limitSymbolsToIncludedHeaders": true
            },
            "includePath": [
                "/opt/ros/melodic/include/**",
                "/usr/include/**",
                "/opt/drake/include"
            ],
            "name": "ROS",
            "configurationProvider": "ms-vscode.cmake-tools"
        }
    ]

4. Cmake file:

    find_package(drake CONFIG REQUIRED PATHS /opt/drake)

    target_link_libraries(${PROJECT_NAME}_node
        ${catkin_LIBRARIES}
        drake::drake
    )