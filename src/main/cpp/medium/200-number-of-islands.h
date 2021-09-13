#ifndef LEETCODE_MEDIUM_200_NUMBER_OF_ISLANDS_H_
#define LEETCODE_MEDIUM_200_NUMBER_OF_ISLANDS_H_

/*
    Given an m x n 2D binary grid grid which represents a map of '1's (land) 
    and '0's (water), return the number of islands.

    An island is surrounded by water and is formed by connecting adjacent 
    lands horizontally or vertically. You may assume all four edges of the 
    grid are all surrounded by water.


    Constraints:
     * m == grid.size()
     * n == grid[i].size()
     * 1 <= m, n <= 300
     * grid[i][j] is '0' or '1'.
 */

#include <vector>

namespace leetcode {
class NumberOfIslands {
  public:
    int numIslands(std::vector<std::vector<char>>& grid) {
      int count = 0;
      for (int m = 0; m < grid.size(); m++) {
        for (int n = 0; n < grid[0].size(); n++) {
          if (grid[m][n] == '1') {
            dfs(grid, m, n);
            count++;
          }
        }
      }
      return count;
    }
  private:
    void dfs(std::vector<std::vector<char>>& grid, int m, int n) {
      if (grid[m][n] == '1') {
        grid[m][n] = '0';
        if (m > 0) {
          dfs(grid, m-1, n);
        }
        if (m < grid.size() - 1) {
          dfs(grid, m+1, n);
        }
        if (n > 0) {
          dfs(grid, m, n-1);
        }
        if (n < grid[0].size() - 1) {
          dfs(grid, m, n+1);
        }
      }
    }
};
} // namespace leetcode

#endif
