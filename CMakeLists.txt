cmake_minimum_required(VERSION 3.1)

set(PROJECT_NAME screenrecorder)
project(${PROJECT_NAME} LANGUAGES CXX)
set(${PROJECT_NAME}_VERSION_MAJOR 0)
set(${PROJECT_NAME}_VERSION_MINOR 1)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add the binary tree to the search path for include files
# so that we will find config file
include_directories("${PROJECT_BINARY_DIR}")

find_package(Qt5 COMPONENTS Core Quick REQUIRED)

add_subdirectory(src)
