#include "medium/934-shortest-bridge.h"

#include "gtest/gtest.h"

#include <vector>

TEST(ShortestBridge, FirstExample) {
  std::vector<std::vector<int>> grid{{0,1}, {1,0}};
  leetcode::ShortestBridge algo;
  ASSERT_EQ(1, algo.shortestBridge(grid));
}

TEST(ShortestBridge, DISABLED_SecondExample) {
  std::vector<std::vector<int>> grid{{0,1,0}, {0,0,0}, {0,0,1}};
  leetcode::ShortestBridge algo;
  ASSERT_EQ(2, algo.shortestBridge(grid));
}

TEST(ShortestBridge, ThirdExample) {
  std::vector<std::vector<int>> grid{{1,1,1,1,1}, 
                                     {1,0,0,0,1},
                                     {1,0,1,0,1},
                                     {1,0,0,0,1},
                                     {1,1,1,1,1}};
  leetcode::ShortestBridge algo;
  ASSERT_EQ(1, algo.shortestBridge(grid));
}
