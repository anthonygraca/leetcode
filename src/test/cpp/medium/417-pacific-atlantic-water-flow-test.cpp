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

TEST(PacificAtlanticWaterFlow, SecondExample) {
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

TEST(PacificAtlanticWaterFlow, CheckPacificLogicSimpleCase) {
  std::vector<std::vector<int>> heights = {
    {0,1},
    {1,2}
  };
  leetcode::PacificAtlanticWaterFlow algo;
  std::vector<std::vector<int>> expected = {
    {0,1}, {1,0}, {1,1}
  };
  ASSERT_EQ(expected, algo.pacificAtlantic(heights));
}

TEST(PacificAtlanticWaterFlow, CheckPacificLogicComplexCase) {
  std::vector<std::vector<int>> heights = {
    {1,2,2,3,5},
    {3,2,3,4,4},
    {2,4,5,3,1},
    {6,7,1,4,5},
    {5,1,1,2,4}
  };
  leetcode::PacificAtlanticWaterFlow algo;
  std::vector<std::vector<bool>> expected = {
    {true, true, true, true, true},
    {true, true, true, true, true},
    {true, true, true, false, false},
    {true, true, false, false, false},
    {true, false, false, false, false}
  };
  auto pacific_paths = algo.findPathToPacific(heights);
  for (int i = 0; i < expected.size(); i++) {
    for (int j = 0; j < expected[0].size(); j++) {
      ASSERT_EQ(expected[i][j], pacific_paths[i][j]);
    }
  }
}

TEST(PacificAtlanticWaterFlow, CheckAtlanticLogicComplexCase) {
  std::vector<std::vector<int>> heights = {
    {1,2,2,3,5},
    {3,2,3,4,4},
    {2,4,5,3,1},
    {6,7,1,4,5},
    {5,1,1,2,4}
  };
  leetcode::PacificAtlanticWaterFlow algo;
  std::vector<std::vector<bool>> expected = {
    {false, false, false, false, true},
    {false, false, false, true, true},
    {false, false, true, true, true},
    {true, true, true, true, true},
    {true, true, true, true, true}
  };
  auto atlantic_paths = algo.findPathToAtlantic(heights);
  for (int i = 0; i < expected.size(); i++) {
    for (int j = 0; j < expected[0].size(); j++) {
      ASSERT_EQ(expected[i][j], atlantic_paths[i][j]) << "i: " << i << "and j: " << j;
    }
  }
}


TEST(PacificAtlanticWaterFlow, CheckAtlanticLogicSimpleCase) {
  std::vector<std::vector<int>> heights = {
    {2,1},
    {1,0}
  };
  leetcode::PacificAtlanticWaterFlow algo;
  std::vector<std::vector<int>> expected = {
    {0,0}, {0,1}, {1,0}
  };
  ASSERT_EQ(expected, algo.pacificAtlantic(heights));
}

TEST(PacificAtlanticWaterFlow, ThirdExample) {
  std::vector<std::vector<int>> heights = {
    {1,1},
    {1,1},
    {1,1}
  };
  leetcode::PacificAtlanticWaterFlow algo;
  std::vector<std::vector<int>> expected = {
    {0,0}, {0,1}, {1,0}, {1,1}, {2,0}, {2,1}
  };
  ASSERT_EQ(expected, algo.pacificAtlantic(heights));
}

TEST(PacificAtlanticWaterFlow, CheckAtlanticLogicThirdExample) {
  std::vector<std::vector<int>> heights = {
    {1,1},
    {1,1},
    {1,1}
  };
  leetcode::PacificAtlanticWaterFlow algo;
  std::vector<std::vector<bool>> expected = {
    {true, true},
    {true, true},
    {true, true}
  };
  auto atlantic_paths = algo.findPathToAtlantic(heights);
  for (int i = 0; i < expected.size(); i++) {
    for (int j = 0; j < expected[0].size(); j++) {
      ASSERT_EQ(expected[i][j], atlantic_paths[i][j]) << "i: " << i << "and j: " << j;
    }
  }
}

TEST(PacificAtlanticWaterFlow, CheckPacificLogicThirdExample) {
  std::vector<std::vector<int>> heights = {
    {1,1},
    {1,1},
    {1,1}
  };
  leetcode::PacificAtlanticWaterFlow algo;
  std::vector<std::vector<bool>> expected = {
    {true, true},
    {true, true},
    {true, true}
  };
  auto pacific_paths = algo.findPathToPacific(heights);
  for (int i = 0; i < expected.size(); i++) {
    for (int j = 0; j < expected[0].size(); j++) {
      ASSERT_EQ(expected[i][j], pacific_paths[i][j]) << "i: " << i << "and j: " << j;
    }
  }
}

TEST(PacificAtlanticWaterFlow, DISABLED_FourthExample) {
  std::vector<std::vector<int>> heights = {
    {1,2,3},{8,9,4},{7,6,5}
  };
  leetcode::PacificAtlanticWaterFlow algo;
  std::vector<std::vector<int>> expected = {
    {0,2},{1,0},{1,1},{1,2},{2,0},{2,1},{2,2}
  };
  ASSERT_EQ(expected, algo.pacificAtlantic(heights));
}


