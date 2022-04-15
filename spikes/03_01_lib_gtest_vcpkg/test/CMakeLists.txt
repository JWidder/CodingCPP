file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

add_executable(${TEST_BINARY} ${TEST_SOURCES})

add_test(NAME ${TEST_BINARY} COMMAND ${TEST_BINARY})

target_include_directories(${TEST_BINARY} PUBLIC ${CMAKE_SOURCE_DIR}/lib)
# target_link_libraries(${TEST_BINARY} PRIVATE ${CMAKE_PROJECT_NAME}_lib GTest::gmock GTest::gtest GTest::gmock_main GTest::gtest_main)
target_link_libraries(${TEST_BINARY} PRIVATE ${CMAKE_PROJECT_NAME}_lib GTest::gtest GTest::gmock)
