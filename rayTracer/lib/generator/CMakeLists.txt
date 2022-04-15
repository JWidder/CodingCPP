file(GLOB_RECURSE LIB_SOURCES LIST_DIRECTORIES false *.h *.cpp)
add_library(generator_lib STATIC ${LIB_SOURCES})
target_include_directories(generator_lib PUBLIC ${CMAKE_SOURCE_DIR}/lib/util ${CMAKE_SOURCE_DIR}/lib/scene)