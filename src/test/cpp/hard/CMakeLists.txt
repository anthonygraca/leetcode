add_executable(median-of-two-sorted-arrays-test 4-median-of-two-sorted-arrays-test.cpp)
target_link_libraries(median-of-two-sorted-arrays-test gtest_main median-of-two-sorted-arrays)
add_test(NAME median-of-two-sorted-arrays-test COMMAND median-of-two-sorted-arrays-test)
