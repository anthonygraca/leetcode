#include "easy/594-longest-harmonious-subsequence.h"

#include "gtest/gtest.h"

TEST(LongestHarmoniousSubsequence, FirstExample) {
  std::vector<int> nums{1,3,2,2,5,2,3,7};
  leetcode::LongestHarmoniousSubsequence algo;
  ASSERT_EQ(5, algo.findLHS(nums));
}

TEST(LongestHarmoniousSubsequence, SecondExample) {
  std::vector<int> nums{1,2,3,4};
  leetcode::LongestHarmoniousSubsequence algo;
  ASSERT_EQ(2, algo.findLHS(nums));
}

TEST(LongestHarmoniousSubsequence, ThirdExample) {
  std::vector<int> nums{1,1,1,1};
  leetcode::LongestHarmoniousSubsequence algo;
  ASSERT_EQ(0, algo.findLHS(nums));
}
