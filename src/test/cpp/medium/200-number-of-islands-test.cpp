#include "medium/200-number-of-islands.h"

#include "gtest/gtest.h"

TEST(NumberOfIslands, FirstExample) {
  std::vector<std::vector<char>> input = {{'1','1','1','1','0'},
                                          {'1','1','0','1','0'},
                                          {'1','1','0','0','0'},
                                          {'0','0','0','0','0'}};
  leetcode::NumberOfIslands solution;
  const int expected{1};
  ASSERT_EQ(expected, solution.numIslands(input));
}

