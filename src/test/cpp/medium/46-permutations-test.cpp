#include "medium/46-permutations.h"

#include "gtest/gtest.h"

#include <vector>

TEST(Permutations, FirstExample) {
  std::vector<int> nums{1,2,3};
  leetcode::Permutation algo;
  std::vector<std::vector<int>> expected{{1,2,3}, {2,1,3},
                                         {3,1,2}, {1,3,2}, 
                                         {2,3,1}, {3,2,1} };
  ASSERT_EQ(expected, algo.permute(nums));
}

TEST(Permutations, SecondExample) {
  std::vector<int> nums{0,1};
  leetcode::Permutation algo;
  std::vector<std::vector<int>> expected{{0,1}, {1,0}};
  ASSERT_EQ(expected, algo.permute(nums));
}

TEST(Permutations, ThirdExample) {
  std::vector<int> nums{1};
  leetcode::Permutation algo;
  std::vector<std::vector<int>> expected{{1}};
  ASSERT_EQ(expected, algo.permute(nums));
}
