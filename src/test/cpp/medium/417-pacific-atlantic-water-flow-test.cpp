#include "medium/417-pacific-atlantic-water-flow.h"

#include "gtest/gtest.h"

#include <vector>

TEST(PacificAtlanticWaterFlow, FirstExample) {
  std::vector<std::vector<int>> heights = {
    {1,2,2,3,5},
    {3,2,3,4,4},
    {2,4,5,3,1},
    {6,7,1,4,5},
    {5,1,1,2,4}
  };
  leetcode::PacificAtlanticWaterFlow algo;
  std::vector<std::vector<int>> expected = {
    {0,4},{1,3},{1,4},{2,2},{3,0},{3,1},{4,0}
  };
  ASSERT_EQ(expected, algo.pacificAtlantic(heights));
}

TEST(PacificAtlanticWaterFlow, DISABLED_SecondExample) {
  std::vector<std::vector<int>> heights = {
    {2,1},
    {1,2}
  };
  leetcode::PacificAtlanticWaterFlow algo;
  std::vector<std::vector<int>> expected = {
    {0,0}, {0,1}, {1,0}, {1,1}
  };
  ASSERT_EQ(expected, algo.pacificAtlantic(heights));
}
