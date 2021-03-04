# Minimum version of CMake
cmake_minimum_required(VERSION 3.0)

# Project Simple HTN Planner
project(SimpleHTNPlanner)

set(CMAKE_CXX_STANDARD 14)

set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Subdirectories
add_subdirectory(Library)
add_subdirectory(Test)