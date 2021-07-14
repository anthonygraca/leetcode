#include "medium/152-maximum-product-subarray.h"

#include "gtest/gtest.h"

TEST(MaximumProductSubarray, FirstExample) {
  std::vector<int> nums{2, 3, -2, 4};
  leetcode::MaximumProductSubarray solution;
  int expected{6};
  ASSERT_EQ(expected, solution.maxProduct(nums));
}
