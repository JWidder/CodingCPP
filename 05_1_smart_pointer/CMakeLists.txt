cmake_minimum_required (VERSION 3.21)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRD ON)

set (CMAKE_TOOLCHAIN_FILE "C:/src/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(smart_pointer VERSION 1.0)

set_property (DIRECTORY PROPERTY VS_STARTUP_PROJECT ${CMAKE_PROJECT_NAME}) 

set(TEST_BINARY ${CMAKE_PROJECT_NAME}_tst)

find_package(GTest CONFIG REQUIRED)

add_subdirectory(src)
add_subdirectory(lib)
add_subdirectory(test)

