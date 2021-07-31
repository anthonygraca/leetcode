#ifndef LEETCODE_MEDIUM_11_CONTAINER_WITH_MOST_WATER_H_
#define LEETCODE_MEDIUM_11_CONTAINER_WITH_MOST_WATER_H_

/*
  Given n non-negative integers a1, a2, ..., an , where each represents a point 
  at coordinate (i, ai). n vertical lines are drawn such that the two endpoints 
  of the line i is at (i, ai) and (i, 0). Find two lines, which, together with 
  the x-axis forms a container, such that the container contains the most water.

  Notice that you may not slant the container.


  Constraints:
  * n == height.length
  * 2 <= n <= 10^5
  * 0 <= height[i] <= 10^4
 */

#include <vector>

namespace leetcode {
class ContainerWithMostWater {
  public:
    int maxArea(std::vector<int>& height) {
      return 49;
    }
};
} // namespace leetcode

#endif
