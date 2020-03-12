set(BINARY ${CMAKE_PROJECT_NAME}_test)

add_subdirectory("${PROJECT_SOURCE_DIR}/external/googletest" "external/googletest")
set(TEST_SOURCES
    ${PROJECT_SOURCE_DIR}/test/testmain.cpp
    ${PROJECT_SOURCE_DIR}/test/helloTest.cpp)

add_executable(${BINARY} ${TEST_SOURCES})
add_test(NAME ${BINARY} COMMAND ${BINARY})

target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)
