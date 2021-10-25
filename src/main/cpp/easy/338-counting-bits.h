#ifndef LEETCODE_EASY_338_COUNTING_BITS_H_
#define LEETCODE_EASY_338_COUNTING_BITS_H_

/*
  Given an integer n, return an array ans of length n + 1 such that for each i 
  (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

  Constraints:
  * 0 <= n <= 10^5

  Follow up:
  * It is very easy to come up with a solution with a runtime of O(n log n). 
    Can you do it in linear time O(n) and possibly in a single pass?
  * Can you do it without using any built-in function 
    (i.e., like __builtin_popcount in C++)?
 */

#include <vector>

namespace leetcode {
class CountingBits {
  public:
    std::vector<int> countBits(int n) {
      int count{0};
      std::vector<int> ans;
      ans.push_back(0); // inserting zero-th element
      for (int i{1}; i <= n; i++) {
        if (((i-1) & 0x1) == 0) {
          ans.push_back(ans[i-1]+1);
        }
        else {
          int bit_flip{0};
          int val{(i-1) >> 1};
          while ((val & 0x1) == 1) {
            bit_flip++;
            val = val >> 1;
          }
          ans.push_back(ans[i-1]-bit_flip);
        }
      }
      return ans;
    }
};
} // namespace leetcode

/*
 * Explanation:
 *  0 --> 0      0
 *  1 --> 1      1
 *  2 --> 10     1
 *  3 --> 11     2
 *  4 --> 100    1
 *  5 --> 101    2
 *  6 --> 110    2
 *  7 --> 111    3
 *  8 --> 1000   1
 *  9 --> 1001   2
 * 10 --> 1010   2
 * 11 --> 1011   3
 * 12 --> 1100   2
 * 13 --> 1101   3
 * 14 --> 1110   3
 * 15 --> 1111   4
 * 16 --> 10000  1
 * 17 --> 10001  2
 * 18 --> 10010  2
 */

#endif
