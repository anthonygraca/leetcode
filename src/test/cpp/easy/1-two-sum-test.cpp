#include "easy/1-two-sum.h"

#include "gtest/gtest.h"

TEST(TwoSum, FirstExample) {
  std::vector<int> nums{2, 7, 11, 15};
  int target{9};
  leetcode::TwoSum solution;
  std::vector<int> expected{0,1};
  ASSERT_EQ(expected, solution.twoSum(nums, target));
}

TEST(TwoSum, SecondExample) {
  std::vector<int> nums{3, 2, 4};
  int target{6};
  leetcode::TwoSum solution;
  std::vector<int> expected{1,2};
  ASSERT_EQ(expected, solution.twoSum(nums, target));
}

TEST(TwoSum, ThirdExample) {
  std::vector<int> nums{3, 3};
  int target{6};
  leetcode::TwoSum solution;
  std::vector<int> expected{0,1};
  ASSERT_EQ(expected, solution.twoSum(nums, target));
}
