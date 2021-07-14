#include "medium/152-maximum-product-subarray.h"

#include "gtest/gtest.h"

TEST(MaximumProductSubarray, FirstExample) {
  std::vector<int> nums{2, 3, -2, 4};
  leetcode::MaximumProductSubarray solution;
  int expected{6};
  ASSERT_EQ(expected, solution.maxProduct(nums));
}

/*
TEST(MaximumProductSubarray, SecondExample) {
  std::vector<int> nums{-2, 0, -1};
  leetcode::MaximumProductSubarray solution;
  int expected{0};
  ASSERT_EQ(expected, solution.maxProduct(nums));
}
*/