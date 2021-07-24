#include "easy/53-maximum-subarray.h"

#include "gtest/gtest.h"

TEST(MaximumSubarray, FirstExample) {
  std::vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};
  leetcode::MaximumSubarray solution;
  int expected{6};
  ASSERT_EQ(expected, solution.maxSubArray(nums));
}

TEST(MaximumSubarray, SecondExample) {
  std::vector<int> nums{1};
  leetcode::MaximumSubarray solution;
  int expected{1};
  ASSERT_EQ(expected, solution.maxSubArray(nums));
}

TEST(MaximumSubarray, ThirdExample) {
  std::vector<int> nums{5, 4, -1, 7, 8};
  leetcode::MaximumSubarray solution;
  int expected{23};
  ASSERT_EQ(expected, solution.maxSubArray(nums));
}

TEST(MaximumSubarray, FirstExampleMichelle) {
  std::vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};
  leetcode::MaximumSubarray solution;
  int expected{6};
  ASSERT_EQ(expected, solution.maxSubArrayMichelle(nums));
}

TEST(MaximumSubarray, SecondExampleMichelle) {
  std::vector<int> nums{1};
  leetcode::MaximumSubarray solution;
  int expected{1};
  ASSERT_EQ(expected, solution.maxSubArrayMichelle(nums));
}

TEST(MaximumSubarray, ThirdExampleMichelle) {
  std::vector<int> nums{5, 4, -1, 7, 8};
  leetcode::MaximumSubarray solution;
  int expected{23};
  ASSERT_EQ(expected, solution.maxSubArrayMichelle(nums));
}
