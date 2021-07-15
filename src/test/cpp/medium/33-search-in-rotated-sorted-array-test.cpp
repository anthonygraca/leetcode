#include "medium/33-search-in-rotated-sorted-array.h"

#include "gtest/gtest.h"

TEST(SearchInRotatedSortedArray, FirstExample) {
  std::vector<int> nums{4,5,6,7,0,1,2};
  int target{0};
  leetcode::SearchInRotatedSortedArray solution;
  int expected{4};
  ASSERT_EQ(expected, solution.search(nums, target));
}

/*
TEST(SearchInRotatedSortedArray, SecondExample) {
  std::vector<int> nums{4,5,6,7,0,1,2};
  int target{3};
  leetcode::SearchInRotatedSortedArray solution;
  int expected{-1};
  ASSERT_EQ(expected, solution.search(nums, target));
}

TEST(SearchInRotatedSortedArray, ThirdExample) {
  std::vector<int> nums{1};
  int target{0};
  leetcode::SearchInRotatedSortedArray solution;
  int expected{-1};
  ASSERT_EQ(expected, solution.search(nums, target));
}
*/
