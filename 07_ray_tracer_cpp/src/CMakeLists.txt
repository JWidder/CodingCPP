add_executable(${CMAKE_PROJECT_NAME} ${CMAKE_PROJECT_NAME}.cpp)

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC 
	${CMAKE_SOURCE_DIR}/lib/scene 
	${CMAKE_SOURCE_DIR}/lib/GENERATOR
	${CMAKE_SOURCE_DIR}/lib/util)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE scene_lib util_lib)
