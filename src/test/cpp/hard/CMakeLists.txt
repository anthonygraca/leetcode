add_executable(median-of-two-sorted-arrays-test 4-median-of-two-sorted-arrays-test.cpp)
target_link_libraries(median-of-two-sorted-arrays-test gtest_main median-of-two-sorted-arrays)
add_test(NAME median-of-two-sorted-arrays-test COMMAND median-of-two-sorted-arrays-test)

add_executable(merge-k-sorted-lists-test 23-merge-k-sorted-lists-test.cpp)
target_link_libraries(merge-k-sorted-lists-test gtest_main merge-k-sorted-lists)
add_test(NAME merge-k-sorted-lists-test COMMAND merge-k-sorted-lists-test)

add_executable(binary-tree-maximum-path-sum-test 124-binary-tree-maximum-path-sum-test.cpp)
target_link_libraries(binary-tree-maximum-path-sum-test gtest_main binary-tree-maximum-path-sum)
add_test(NAME binary-tree-maximum-path-sum-test COMMAND binary-tree-maximum-path-sum-test)

add_executable(serialize-and-deserialize-binary-tree-test 297-serialize-and-deserialize-binary-tree-test.cpp)
target_link_libraries(serialize-and-deserialize-binary-tree-test gtest_main serialize-and-deserialize-binary-tree)
add_test(NAME serialize-and-deserialize-binary-tree-test COMMAND serialize-and-deserialize-binary-tree-test)
