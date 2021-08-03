#include "medium/15-3sum.h"

#include "gtest/gtest.h"

TEST(ThreeSum, FirstExample) {
  std::vector<int> nums={-1, 0, 1, 2, -1, 4};
  leetcode::ThreeSum solution;
  std::vector<std::vector<int>> expected{{-1, -1, 2}, {-1, 0, 1}};
  ASSERT_EQ(expected, solution.threeSum(nums));
}

TEST(ThreeSum, SecondExample) {
  std::vector<int> nums={};
  leetcode::ThreeSum solution;
  std::vector<std::vector<int>> expected{};
  ASSERT_EQ(expected, solution.threeSum(nums));
}

TEST(ThreeSum, ThirdExample) {
  std::vector<int> nums={0};
  leetcode::ThreeSum solution;
  std::vector<std::vector<int>> expected{};
  ASSERT_EQ(expected, solution.threeSum(nums));
}
