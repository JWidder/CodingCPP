cmake_minimum_required (VERSION 3.21)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRD ON)

project(hello_world VERSION 1.0)

add_subdirectory(src)

set_property (DIRECTORY PROPERTY VS_STARTUP_PROJECT ${CMAKE_PROJECT_NAME}) 
