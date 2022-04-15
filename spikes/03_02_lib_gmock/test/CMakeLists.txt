# file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)
# add_executable(${CMAKE_PROJECT_NAME}_tst ${TEST_SOURCES} "test_Sphere3D.cpp")

add_executable(${CMAKE_PROJECT_NAME}_test 
	testMain.cpp
	test_Util.cpp)

add_test(NAME ${TEST_BINARY} COMMAND ${TEST_BINARY})

target_include_directories(${TEST_BINARY} PUBLIC 
	${CMAKE_SOURCE_DIR}/lib/util)

target_link_libraries(${TEST_BINARY} PUBLIC util_lib GTest::gtest GTest::gmock)

