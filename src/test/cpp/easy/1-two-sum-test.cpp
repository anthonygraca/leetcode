#include "easy/1-two-sum.h"

#include "gtest/gtest.h"

TEST(TwoSum, InitializedStackIsEmpty) {
  std::vector<int> nums{2, 7, 11, 15};
  int target{9};
  leetcode::TwoSum solution;
  std::vector<int> expected{0,1};
  ASSERT_EQ(expected, solution.twoSum(nums, target));
}
