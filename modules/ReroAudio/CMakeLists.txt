# Copyright: (C) 2020 Reverb Robotics Inc.
# Authors: Lukas Grasse <lukas@reverbrobotics.ca>
# CopyPolicy: Released under the terms of the GNU GPL v2.0.

cmake_minimum_required(VERSION 3.5)

set(MODULE_NAME reroAudio)
project(${MODULE_NAME} LANGUAGES CXX C)

file(GLOB FOLDER_SOURCE src/*.cpp src/*.cc src/*.c)
file(GLOB FOLDER_HEADER include/*.h)

source_group("Source Files" FILES ${FOLDER_SOURCE})
source_group("Header Files" FILES ${FOLDER_HEADER})


set(GRPC_PATH "$ENV{HOME}/Dev/grpc" CACHE PATH "path to GRPC repository")
add_subdirectory(${GRPC_PATH} ${CMAKE_CURRENT_BINARY_DIR}/grpc EXCLUDE_FROM_ALL)
message(STATUS "Using gRPC via add_subdirectory.")

set(_PROTOBUF_LIBPROTOBUF libprotobuf)
set(_REFLECTION grpc++_reflection)
if(CMAKE_CROSSCOMPILING)
    find_program(_PROTOBUF_PROTOC protoc)
else()
    set(_PROTOBUF_PROTOC $<TARGET_FILE:protobuf::protoc>)
endif()
set(_GRPC_GRPCPP grpc++)
if(CMAKE_CROSSCOMPILING)
    find_program(_GRPC_CPP_PLUGIN_EXECUTABLE grpc_cpp_plugin)
else()
    set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:grpc_cpp_plugin>)
endif()

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
