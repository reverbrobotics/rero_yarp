# Copyright: (C) 2020 Reverb Robotics Inc.
# Authors: Lukas Grasse <lukas@reverbrobotics.ca>
# CopyPolicy: Released under the terms of the GNU GPL v2.0.

cmake_minimum_required(VERSION 3.5)

set(MODULE_NAME reroSpeechRecognition)
project(${MODULE_NAME} LANGUAGES CXX C)

file(GLOB FOLDER_SOURCE src/*.cpp src/*.cc src/*.c)
file(GLOB FOLDER_HEADER include/*.h)

source_group("Source Files" FILES ${FOLDER_SOURCE})
source_group("Header Files" FILES ${FOLDER_HEADER})

include_directories("${CMAKE_CURRENT_BINARY_DIR}")

add_executable(
    ${PROJECT_NAME}
    ${FOLDER_SOURCE}
    ${FOLDER_HEADER}
)

target_include_directories(
    ${PROJECT_NAME}
    PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/../../lib/client/include
    ${PROJECT_SOURCE_DIR}/../../lib/client

)

message(${PROJECT_SOURCE_DIR})
    
target_link_libraries(
    ${PROJECT_NAME}
    ${YARP_LIBRARIES}
    ${PROJECT_SOURCE_DIR}/../../lib/client/libReroClient.a
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF}

)
    
install(
    TARGETS
    ${PROJECT_NAME}
    DESTINATION bin    
)
