cmake_minimum_required (VERSION 3.20)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRD ON)

set (CMAKE_TOOLCHAIN_FILE "C:/src/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(coding_tasks VERSION 1.0)

set(TEST_BINARY ${CMAKE_PROJECT_NAME}_tst)

find_package(GTest CONFIG REQUIRED)

add_subdirectory(lib)
add_subdirectory(test)

set_property (DIRECTORY PROPERTY VS_STARTUP_PROJECT ${TEST_BINARY}) 