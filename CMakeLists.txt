# CMake minimum version requirement
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(Vector VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the main executable
# Specify the path to source files in the src directory
add_executable(Vector src/main.cpp src/Vector.cpp)

# Include directories for header files in the include directory
target_include_directories(Vector PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
