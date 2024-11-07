# Copyright: (C) 2020 Reverb Robotics Inc.
# Authors: Lukas Grasse <lukas@reverbrobotics.ca>
#
# Based on source code from https://github.com/TataLab/iCubAudioAttention
# Copyright (C) 2019 Department of Neuroscience - University of Lethbridge

# CopyPolicy: Released under the terms of the GNU GPL v2.0.

cmake_minimum_required(VERSION 3.5)

project(ReroYarp LANGUAGES CXX C VERSION 1.0.0)
message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")

############################################################

include(GNUInstallDirs)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}")

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

if( MSVC )
    set(CMAKE_DEBUG_POSTFIX "d")
endif( )

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(CMAKE_CXX_EXTENSIONS        OFF)
set(CMAKE_CXX_STANDARD          14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

############################################################

find_package(ICUBcontrib REQUIRED)
find_package(YARP        REQUIRED)
find_package(ICUB        REQUIRED)
find_package(YCM         QUIET)
find_package(OpenCV      QUIET)

list(APPEND CMAKE_MODULE_PATH ${ICUBCONTRIB_MODULE_PATH})
list(APPEND CMAKE_MODULE_PATH ${ICUB_MODULE_PATH})

if( YCM_FOUND )
    list(APPEND CMAKE_MODULE_PATH ${YCM_MODULE_PATH})
else( YCM_FOUND )
    list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
endif( YCM_FOUND )

if( OpenCV_FOUND )
    message("OpenCV version found is ${OpenCV_VERSION_MAJOR}.${OpenCV_VERSION_MINOR}")
else( OpenCV_FOUND )
    message("OpenCV not found. Some modules may not compile as a result. Continuing without.")
endif( OpenCV_FOUND )

include(ICUBcontribOptions)
include(ICUBcontribHelpers)

############################################################
include(FetchContent)
add_subdirectory( pythonScripts)

FetchContent_Declare(
        gRPC
        GIT_REPOSITORY https://github.com/grpc/grpc
        GIT_TAG        v1.58.0
)
set(FETCHCONTENT_QUIET OFF)
FetchContent_MakeAvailable(gRPC)

set(_PROTOBUF_LIBPROTOBUF libprotobuf)
set(_REFLECTION grpc++_reflection)
set(_PROTOBUF_PROTOC $<TARGET_FILE:protoc>)
set(_GRPC_GRPCPP grpc++)
#if(CMAKE_CROSSCOMPILING)
#find_program(_GRPC_CPP_PLUGIN_EXECUTABLE grpc_cpp_plugin)
#else()
set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:grpc_cpp_plugin>)
#endif()


include(AddInstallRPATHSupport)
add_install_rpath_support(
    BIN_DIRS          "${CMAKE_INSTALL_FULL_LIBDIR}"
    LIB_DIRS          "${CMAKE_INSTALL_FULL_BINDIR}"
    INSTALL_NAME_DIR  "${CMAKE_INSTALL_FULL_LIBDIR}"
    USE_LINK_PATH
)

if( NOT CMAKE_CONFIGURATION_TYPES )
    if( NOT CMAKE_BUILD_TYPE )
        message(STATUS "Setting build type to 'Release' as none was specified.")
        set_property(CACHE CMAKE_BUILD_TYPE PROPERTY VALUE "Release")
    endif( )
endif( )

############################################################

icubcontrib_set_default_prefix()

include(AddUninstallTarget)

add_subdirectory( modules      )
add_subdirectory( app          )

