add_library(scene_lib STATIC 
	"Plane3D.cpp" "Plane3D.h" 
	"Sphere3D.cpp" "Sphere3D.h" 
	"Triangle.cpp" "Triangle.h")

target_include_directories(scene_lib PUBLIC ${CMAKE_SOURCE_DIR}/lib/util)