add_executable(add-two-numbers-test 2-add-two-numbers-test.cpp)
target_link_libraries(add-two-numbers-test gtest_main add-two-numbers)
add_test(NAME add-two-numbers-test COMMAND add-two-numbers-test)

add_executable(longest-substring-without-repeating-characters-test 3-longest-substring-without-repeating-characters-test.cpp)
target_link_libraries(longest-substring-without-repeating-characters-test gtest_main longest-substring-without-repeating-characters)
add_test(NAME longest-substring-without-repeating-characters-test COMMAND longest-substring-without-repeating-characters-test)

add_executable(search-in-rotated-sorted-array-test 33-search-in-rotated-sorted-array-test.cpp)
target_link_libraries(search-in-rotated-sorted-array-test gtest_main search-in-rotated-sorted-array)
add_test(NAME search-in-rotated-sorted-array-test COMMAND search-in-rotated-sorted-array-test)

add_executable(maximum-product-subarray-test 152-maximum-product-subarray-test.cpp)
target_link_libraries(maximum-product-subarray-test gtest_main maximum-product-subarray)
add_test(NAME maximum-product-subarray-test COMMAND maximum-product-subarray-test)

add_executable(find-minimum-in-rotated-sorted-array-test 153-find-minimum-in-rotated-sorted-array-test.cpp)
target_link_libraries(find-minimum-in-rotated-sorted-array-test gtest_main find-minimum-in-rotated-sorted-array)
add_test(NAME find-minimum-in-rotated-sorted-array-test COMMAND find-minimum-in-rotated-sorted-array-test)

add_executable(recursive-find-minimum-in-rotated-sorted-array-test 153-recursive-find-minimum-in-rotated-sorted-array-test.cpp)
target_link_libraries(recursive-find-minimum-in-rotated-sorted-array-test gtest_main recursive-find-minimum-in-rotated-sorted-array)
add_test(NAME recursive-find-minimum-in-rotated-sorted-array-test COMMAND recursive-find-minimum-in-rotated-sorted-array-test)

add_executable(product-of-array-except-self-test 238-product-of-array-except-self-test.cpp)
target_link_libraries(product-of-array-except-self-test gtest_main product-of-array-except-self)
add_test(NAME product-of-array-except-self-test COMMAND product-of-array-except-self-test)
