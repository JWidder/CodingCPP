cmake_minimum_required (VERSION 3.20)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRD ON)

set (CMAKE_TOOLCHAIN_FILE "C:/src/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(RayTracer VERSION 1.0)

set_property (DIRECTORY PROPERTY VS_STARTUP_PROJECT ${CMAKE_PROJECT_NAME}) 

set(TEST_BINARY ${CMAKE_PROJECT_NAME}_tst)

find_package(GTest CONFIG REQUIRED)

add_subdirectory(lib/generator)
add_subdirectory(lib/scene)
add_subdirectory(lib/util)
add_subdirectory(test)
add_subdirectory(src)


