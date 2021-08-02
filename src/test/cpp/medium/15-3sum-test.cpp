#include "medium/15-3sum.h"

#include "gtest/gtest.h"

TEST(ThreeSum, FirstExample) {
  std::vector<int> nums={-1, 0, 1, 2, -1, 4};
  leetcode::ThreeSum solution;
  std::vector<std::vector<int>> expected{{-1, -1, 2}, {-1, 0, 1}};
  ASSERT_EQ(expected, solution.threeSum(nums));
}
