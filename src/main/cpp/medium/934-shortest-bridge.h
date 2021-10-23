#ifndef LEETCODE_MEDIUM_934_SHORTEST_BRIDGE_H_
#define LEETCODE_MEDIUM_934_SHORTEST_BRIDGE_H_

/*
  In a given 2D binary array grid, there are two islands.  (An island is a 
  4-directionally connected group of 1s not connected to any other 1s.)

  Now, we may change 0s to 1s so as to connect the two islands together to 
  form 1 island.

  Return the smallest number of 0s that must be flipped.  (It is guaranteed 
  that the answer is at least 1.)


  Constraints:
   * 2 <= grid.length == grid[0].length <= 100
   * grid[i][j] == 0 or grid[i][j] == 1
 */

#include <vector>

namespace leetcode {
class ShortestBridge {
public:
  int shortestBridge(std::vector<std::vector<int>>& grid) {
    return 1;
  }
};
} // namespace leetcode

#endif
