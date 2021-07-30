#ifndef LEETCODE_EASY_70_CLIMBING_STAIRS_H_
#define LEETCODE_EASY_70_CLIMBING_STAIRS_H_

/*
   You are climbing a staircase. It takes n steps to reach the top.

   Each time you can either climb 1 or 2 steps. In how many distinct ways can 
   you climb to the top?


   Constraints:
   * 1 <= n <= 45
 */

namespace leetcode {
class ClimbingStairs {
  public:
    int climbStairs(int n) {
      int n1 = 1;
      int n2 = 2;
      for (int i = 2; i < n; i++) {
        int temp = n2;
        n2 = n1 + n2;
        n1 = temp;
      }
      return n2;
    }
    int climbStairsNaive(int n) {
      if (n == 1) return 1;
      if (n == 2) return 2;
      return climbStairs(n-1) + climbStairs(n-2);
    }
};
} // namespace leetcode

#endif
