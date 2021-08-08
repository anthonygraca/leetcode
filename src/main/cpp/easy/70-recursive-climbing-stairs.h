#ifndef LEETCODE_EASY_70_RECURSIVE_CLIMBING_STAIRS_H_
#define LEETCODE_EASY_70_RECURSIVE_CLIMBING_STAIRS_H_

#include <vector>

namespace leetcode {
class RecursiveClimbingStairs {
  public:
    RecursiveClimbingStairs(int n) {
      solved_subproblem = std::vector<int>(n+1, -1);
    }
    int climbStairs(int n) {
      if (solved_subproblem[n] == -1) {
        if (n <= 2) {
          solved_subproblem[n] = n;
        }
        else {
          solved_subproblem[n] = climbStairs(n-1) + climbStairs(n-2);
        }
      }
      return solved_subproblem[n];
    }
  private:
    std::vector<int> solved_subproblem;
};
} // namespace leetcode

#endif
