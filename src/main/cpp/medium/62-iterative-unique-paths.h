#ifndef LEETCODE_MEDIUM_62_ITERATIVE_UNIQUE_PATHS_H_
#define LEETCODE_MEDIUM_62_ITERATIVE_UNIQUE_PATHS_H_

/*
 * A robot is located at the top-left corner of a m x n grid (marked 'Start' in 
 * the diagram below).

   The robot can only move either down or right at any point in time. The robot 
   is trying to reach the bottom-right corner of the grid (marked 'Finish' in 
   the diagram below).

   How many possible unique paths are there?


   Constraints:
   * 1 <= m, n <= 100
   * It's guaranteed that the answer will be less than or equal to 2 * 10^9.
 */

#include <vector>

namespace leetcode {
class IterativeUniquePaths {
  public:
    int unique_paths(int m, int n) {
      if (m == 1 || n == 1) return 1;
      std::vector<std::vector<int>> found(m, std::vector<int>(n, -1));
      for (int i = 0; i < m; i++) {
        found[i][0] = 1;
      }
      for (int i = 0; i < n; i++) {
        found[0][i] = 1;
      }
      for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
          found[i][j] = found[i-1][j] + found[i][j-1];
        }
      }
      return found[m-1][n-1];
    }
};
} // namespace leetcode

#endif
