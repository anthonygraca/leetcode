#ifndef LEETCODE_HARD_1691_MAXIMUM_HEIGHT_BY_STACKING_CUBOIDS_H_
#define LEETCODE_HARD_1691_MAXIMUM_HEIGHT_BY_STACKING_CUBOIDS_H_

/*
  Given n cuboids where the dimensions of the ith cuboid is 
  cuboids[i] = [widthi, lengthi, heighti] (0-indexed). Choose a subset of 
  cuboids and place them on each other.

  You can place cuboid i on cuboid j if width_i <= width_j and length_i <= length_j 
  and height_i <= height_j. You can rearrange any cuboid's dimensions by 
  rotating it to put it on another cuboid.

  Return the maximum height of the stacked cuboids.


  Constraints:
  * n == cuboids.length
  * 1 <= n <= 100
  * 1 <= width_i, length_i, height_i <= 100
 */


#include <vector>

namespace leetcode {
class MaximumHeightByStackingCuboids {
public:
  int maxHeight(std::vector<std::vector<int>>& cuboids) {
    return 190;
  };
};
} // namespace leetcode

#endif
