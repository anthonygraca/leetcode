#ifndef LEETCODE_MEDIUM_62_UNIQUE_PATHS_H_
#define LEETCODE_MEDIUM_62_UNIQUE_PATHS_H_

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
class UniquePaths {
  public:
    int unique_paths(int m, int n) {
      if (m == 1 || n == 1) return 1;
      std::vector<std::vector<int>> found(m+1, std::vector<int>(n+1, -1));
      found[1][1] = 0;
      found[1][2] = 1;
      found[2][1] = 1;
      return unique_paths(m, n, found);
    }

    int unique_paths(int m, int n, std::vector<std::vector<int>>& found) {
      if (m == 1 || n == 1) return 1;
      if (found[m][n] != -1) return found[m][n];
      found[m][n] = unique_paths(m-1, n, found) + unique_paths(m, n-1, found);
      return found[m][n];
    }
};
} // namespace leetcode

#endif
