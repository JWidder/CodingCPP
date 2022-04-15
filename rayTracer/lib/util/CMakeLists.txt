file(GLOB_RECURSE LIB_SOURCES LIST_DIRECTORIES false *.h *.cpp)
add_library(util_lib STATIC ${LIB_SOURCES})