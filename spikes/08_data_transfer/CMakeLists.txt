cmake_minimum_required (VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRD ON)

set (CMAKE_TOOLCHAIN_FILE "C:/src/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(data_transfer VERSION 1.0)

set(TEST_BINARY ${CMAKE_PROJECT_NAME}_test)

find_package(GTest CONFIG REQUIRED)

add_subdirectory(lib/util)
add_subdirectory(test)
add_subdirectory(src)

set_property (DIRECTORY PROPERTY VS_STARTUP_PROJECT ${CMAKE_PROJECT_NAME}) 
# set_property (DIRECTORY PROPERTY VS_STARTUP_PROJECT ${TEST_BINARY}) 
