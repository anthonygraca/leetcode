#include "easy/53-maximum-subarray.h"

#include "gtest/gtest.h"

TEST(MaximumSubarray, FirstExample) {
  std::vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};
  leetcode::MaximumSubarray solution;
  int expected{6};
  ASSERT_EQ(expected, solution.maxSubArray(nums));
}
