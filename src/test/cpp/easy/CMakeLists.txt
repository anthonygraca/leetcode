add_executable(two-sum-test 1-two-sum-test.cpp)
target_link_libraries(two-sum-test gtest_main two-sum)
add_test(NAME two-sum-test COMMAND two-sum-test)

add_executable(palindrome-number-test 9-palindrome-number-test.cpp)
target_link_libraries(palindrome-number-test gtest_main palindrome-number)
add_test(NAME palindrome-number-test COMMAND palindrome-number-test)

add_executable(merge-two-sorted-lists-test 21-merge-two-sorted-lists-test.cpp)
target_link_libraries(merge-two-sorted-lists-test gtest_main merge-two-sorted-lists linked-list-util)
add_test(NAME merge-two-sorted-lists-test COMMAND merge-two-sorted-lists-test)

add_executable(maximum-subarray-test 53-maximum-subarray-test.cpp)
target_link_libraries(maximum-subarray-test gtest_main maximum-subarray)
add_test(NAME maximum-subarray-test COMMAND maximum-subarray-test)

add_executable(plus-one-test 66-plus-one-test.cpp)
target_link_libraries(plus-one-test gtest_main plus-one)
add_test(NAME plus-one-test COMMAND plus-one-test)

add_executable(climbing-stairs-test 70-climbing-stairs-test.cpp)
target_link_libraries(climbing-stairs-test gtest_main climbing-stairs)
add_test(NAME climbing-stairs-test COMMAND climbing-stairs-test)

add_executable(recursive-climbing-stairs-test 70-recursive-climbing-stairs-test.cpp)
target_link_libraries(recursive-climbing-stairs-test gtest_main recursive-climbing-stairs)
add_test(NAME recursive-climbing-stairs-test COMMAND recursive-climbing-stairs-test)

add_executable(maximum-depth-of-binary-tree-test 104-maximum-depth-of-binary-tree-test.cpp)
target_link_libraries(maximum-depth-of-binary-tree-test gtest_main maximum-depth-of-binary-tree)
add_test(NAME maximum-depth-of-binary-tree-test COMMAND maximum-depth-of-binary-tree-test)

add_executable(path-sum-test 112-path-sum-test.cpp)
target_link_libraries(path-sum-test gtest_main path-sum)
add_test(NAME path-sum-test COMMAND path-sum-test)

add_executable(best-time-to-buy-and-sell-stock-test 121-best-time-to-buy-and-sell-stock-test.cpp)
target_link_libraries(best-time-to-buy-and-sell-stock-test gtest_main best-time-to-buy-and-sell-stock)
add_test(NAME best-time-to-buy-and-sell-stock-test COMMAND best-time-to-buy-and-sell-stock-test)

add_executable(linked-list-cycle-test 141-linked-list-cycle-test.cpp)
target_link_libraries(linked-list-cycle-test gtest_main linked-list-cycle)
add_test(NAME linked-list-cycle-test COMMAND linked-list-cycle-test)

add_executable(reverse-bits-test 190-reverse-bits-test.cpp)
target_link_libraries(reverse-bits-test gtest_main reverse-bits)
add_test(NAME reverse-bits-test COMMAND reverse-bits-test)

add_executable(number-of-1-bits-test 191-number-of-1-bits-test.cpp)
target_link_libraries(number-of-1-bits-test gtest_main number-of-1-bits)
add_test(NAME number-of-1-bits-test COMMAND number-of-1-bits-test)

add_executable(reverse-linked-list-test 206-reverse-linked-list-test.cpp)
target_link_libraries(reverse-linked-list-test gtest_main reverse-linked-list)
add_test(NAME reverse-linked-list-test COMMAND reverse-linked-list-test)

add_executable(contains-duplicate-test 217-contains-duplicate-test.cpp)
target_link_libraries(contains-duplicate-test gtest_main contains-duplicate)
add_test(NAME contains-duplicate-test COMMAND contains-duplicate-test)

add_executable(invert-binary-tree-test 226-invert-binary-tree-test.cpp)
target_link_libraries(invert-binary-tree-test gtest_main invert-binary-tree)
add_test(NAME invert-binary-tree-test COMMAND invert-binary-tree-test)

add_executable(closest-binary-tree-value-test 270-closest-binary-tree-value-test.cpp)
target_link_libraries(closest-binary-tree-value-test gtest_main closest-binary-tree-value)
add_test(NAME closest-binary-tree-value-test COMMAND closest-binary-tree-value-test)

add_executable(counting-bits-test  338-counting-bits-test.cpp)
target_link_libraries(counting-bits-test gtest_main counting-bits)
add_test(NAME counting-bits-test COMMAND counting-bits-test)

add_executable(longest-harmonious-subsequence-test 594-longest-harmonious-subsequence-test.cpp)
target_link_libraries(longest-harmonious-subsequence-test gtest_main longest-harmonious-subsequence)
add_test(NAME longest-harmonious-subsequence-test COMMAND longest-harmonious-subsequence-test)

add_executable(rectangle-overlap-test 836-rectangle-overlap-test.cpp)
target_link_libraries(rectangle-overlap-test gtest_main rectangle-overlap)
add_test(NAME rectangle-overlap-test COMMAND rectangle-overlap-test)

