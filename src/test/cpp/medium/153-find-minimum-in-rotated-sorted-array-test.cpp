#include "medium/153-find-minimum-in-rotated-sorted-array.h" 

#include "gtest/gtest.h"

TEST(FindMinimumInRotatedSortedArray, FirstExample) {
  std::vector<int> nums{3, 4, 5, 1, 2};
  leetcode::FindMinimumInRotatedSortedArray solution;
  int expected{1};
  ASSERT_EQ(expected, solution.findMin(nums));
}
