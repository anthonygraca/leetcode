#ifndef LEETCODE_MEDIUM_62_UNIQUE_PATHS_H_
#define LEETCODE_MEDIUM_62_UNIQUE_PATHS_H_

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
