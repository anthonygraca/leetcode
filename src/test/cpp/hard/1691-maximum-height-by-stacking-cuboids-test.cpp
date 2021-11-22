#include "hard/1691-maximum-height-by-stacking-cuboids.h"

#include "gtest/gtest.h"

#include <vector>

TEST(MaximumHeightByStackingCuboids, FirstExample) {
  std::vector<std::vector<int>> cuboids{{50,45,20},{95,37,53},{45,23,12}};
  leetcode::MaximumHeightByStackingCuboids algo;
  ASSERT_EQ(190, algo.maxHeight(cuboids));
}
