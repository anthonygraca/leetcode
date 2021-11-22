#include "hard/1691-maximum-height-by-stacking-cuboids.h"

#include "gtest/gtest.h"

#include <vector>

/*
 * Explanation:
 * Cuboid 1 is placed on the bottom with the 53x37 side facing down with height 95.
 * Cuboid 0 is placed next with the 45x20 side facing down with height 50.
 * Cuboid 2 is placed next with the 23x12 side facing down with height 45.
 * The total height is 95 + 50 + 45 = 190.
 */
TEST(MaximumHeightByStackingCuboids, FirstExample) {
  std::vector<std::vector<int>> cuboids{{50,45,20},{95,37,53},{45,23,12}};
  leetcode::MaximumHeightByStackingCuboids algo;
  ASSERT_EQ(190, algo.maxHeight(cuboids));
}

/*
 * Explanation:
 * You can't place any of the cuboids on the other.
 * We choose cuboid 1 and rotate it so that the 35x3 side is facing down and its height is 76.
 */
TEST(MaximumHeightByStackingCuboids, DISABLED_SecondExample) {
  std::vector<std::vector<int>> cuboids{{38,25,45},{76,35,3}};
  leetcode::MaximumHeightByStackingCuboids algo;
  ASSERT_EQ(76, algo.maxHeight(cuboids));
}

/*
 * Explanation:
 * After rearranging the cuboids, you can see that all cuboids have the same dimension.
 * You can place the 11x7 side down on all cuboids so their heights are 17.
 * The maximum height of stacked cuboids is 6 * 17 = 102.
 */
TEST(MaximumHeightByStackingCuboids, DISABLED_ThirdExample) {
  std::vector<std::vector<int>> cuboids{{7,11,17},{7,17,11},{11,7,17},{11,17,7},{17,7,11},{17,11,7}};
  leetcode::MaximumHeightByStackingCuboids algo;
  ASSERT_EQ(102, algo.maxHeight(cuboids));
}
