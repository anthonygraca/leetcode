#include "medium/153-recursive-find-minimum-in-rotated-sorted-array.h" 

#include "gtest/gtest.h"

TEST(FindMinimumInRotatedSortedArray, FirstExample) {
  std::vector<int> nums{3, 4, 5, 1, 2};
  leetcode::RecursiveFindMinimumInRotatedSortedArray solution;
  int expected{1};
  ASSERT_EQ(expected, solution.findMin(nums));
}

TEST(FindMinimumInRotatedSortedArray, SecondExample) {
  std::vector<int> nums{4, 5, 6, 7, 0, 1, 2};
  leetcode::RecursiveFindMinimumInRotatedSortedArray solution;
  int expected{0};
  ASSERT_EQ(expected, solution.findMin(nums));
}

TEST(FindMinimumInRotatedSortedArray, ThirdExample) {
  std::vector<int> nums{11, 13, 15, 17};
  leetcode::RecursiveFindMinimumInRotatedSortedArray solution;
  int expected{11};
  ASSERT_EQ(expected, solution.findMin(nums));
}
