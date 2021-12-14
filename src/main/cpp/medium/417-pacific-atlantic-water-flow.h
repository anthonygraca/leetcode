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
    findPathToPacific(heights);
    findPathToAtlantic(heights);
    std::vector<std::vector<int>> expected;
    for (int i = 0; i < heights.size(); i++) {
      for (int j = 0; j < heights[0].size(); j++) {
        if (m_path_to_pacific[i][j] && m_path_to_atlantic[i][j]) {
          expected.push_back({i, j});
        }
      }
    }
    /*
    std::vector<std::vector<int>> expected = {
      {0,4},{1,3},{1,4},{2,2},{3,0},{3,1},{4,0}
    };
    */
    return expected;
  }

  std::vector<std::vector<bool>> findPathToPacific(std::vector<std::vector<int>> heights) {
    m_path_to_pacific = std::vector<std::vector<bool>>(
        heights.size(), std::vector<bool>(heights[0].size(), false));

    for (int i = 0; i < heights.size(); i++) {
      m_path_to_pacific[i][0] = true;
    }
    for (int j = 0; j < heights[0].size(); j++) {
      m_path_to_pacific[0][j] = true;
    }
    for (int i = 1; i < heights.size(); i++) {
      for (int j = 1; j < heights[0].size(); j++) {
        int current_height = heights[i][j];
        bool is_path_up = false;
        bool is_path_left = false;
        if (current_height >= heights[i-1][j]) {
          is_path_up = m_path_to_pacific[i-1][j];
        }
        if (current_height >= heights[i][j-1]) {
          is_path_left = m_path_to_pacific[i][j-1];
        }
        m_path_to_pacific[i][j] = (is_path_up || is_path_left);
      }
    }
    return m_path_to_pacific;
  }

  std::vector<std::vector<bool>> findPathToAtlantic(std::vector<std::vector<int>> heights) {
    m_path_to_atlantic = std::vector<std::vector<bool>>(
        heights.size(), std::vector<bool>(heights[0].size(), false));

    for (int i = 0; i < heights.size(); i++) {
      m_path_to_atlantic[i][heights.size()-1] = true;
    }
    for (int j = 0; j < heights[0].size(); j++) {
      m_path_to_atlantic[heights[0].size()-1][j] = true;
    }
    for (int i = heights.size()-2; i >= 0; i--) {
      for (int j = heights[0].size()-2; j >= 0; j--) {
        int current_height = heights[i][j];
        bool is_path_down = false;
        bool is_path_right = false;
        if (current_height >= heights[i+1][j]) {
          is_path_down = m_path_to_atlantic[i+1][j];
        }
        if (current_height >= heights[i][j+1]) {
          is_path_right = m_path_to_atlantic[i][j+1];
        }
        m_path_to_atlantic[i][j] = (is_path_down || is_path_right);
      }
    }
    return m_path_to_atlantic;
  }

private:
  std::vector<std::vector<bool>> m_path_to_pacific;
  std::vector<std::vector<bool>> m_path_to_atlantic;
};
} // namespace leetcode

#endif
