file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

add_executable(${TEST_BINARY} ${TEST_SOURCES})

add_test(NAME ${TEST_BINARY} COMMAND ${TEST_BINARY})

target_include_directories(${TEST_BINARY} PUBLIC ${CMAKE_SOURCE_DIR}/lib/util)
target_link_libraries(${TEST_BINARY} PUBLIC util_lib GTest::gtest GTest::gmock)
