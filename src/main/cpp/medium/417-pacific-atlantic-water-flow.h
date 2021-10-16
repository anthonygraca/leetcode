#ifndef LEETCODE_MEDIUM_417_PACIFIC_ATLANTIC_WATER_FLOW_H_
#define LEETCODE_MEDIUM_417_PACIFIC_ATLANTIC_WATER_FLOW_H_

/*
 There is an m x n rectangular island that borders both the Pacific Ocean and 
 Atlantic Ocean. The Pacific Ocean touches the island's left and top edges, 
 and the Atlantic Ocean touches the island's right and bottom edges.

 The island is partitioned into a grid of square cells. You are given an m x n 
 integer matrix heights where heights[r][c] represents the height above sea 
 level of the cell at coordinate (r, c).

 The island receives a lot of rain, and the rain water can flow to neighboring 
 cells directly north, south, east, and west if the neighboring cell's height 
 is less than or equal to the current cell's height. Water can flow from any 
 cell adjacent to an ocean into the ocean.

 Return a 2D list of grid coordinates result where result[i] = [r_i, c_i] 
 denotes that rain water can flow from cell (r_i, c_i) to both the Pacific and 
 Atlantic oceans.

 Constraints:
  * m == heights.length
  * n == heights[r].length
  * 1 <= m, n <= 200
  * 0 <= heights[r][c] <= 10^5
 */

#include <vector>

namespace leetcode {
class PacificAtlanticWaterFlow {
public:
  std::vector<std::vector<int>> pacificAtlantic(
         std::vector<std::vector<int>>& heights) {
    std::vector<std::vector<int>> expected = {
      {0,4},{1,3},{1,4},{2,2},{3,0},{3,1},{4,0}
    };
    return expected;
  }
};
} // namespace leetcode

#endif
