cmake_minimum_required (VERSION 3.21)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRD ON)

project(Client VERSION 1.0)

set_property (DIRECTORY PROPERTY VS_STARTUP_PROJECT ${CMAKE_PROJECT_NAME}) 

add_subdirectory(src)

