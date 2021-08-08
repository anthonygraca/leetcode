#ifndef LEETCODE_MEDIUM_322_RECURSIVE_COIN_CHANGE_H_
#define LEETCODE_MEDIUM_322_RECURSIVE_COIN_CHANGE_H_

/*
  You are given an integer array coins representing coins of different 
  denominations and an integer amount representing a total amount of money.

  Return the fewest number of coins that you need to make up that amount. If 
  that amount of money cannot be made up by any combination of the coins, 
  return -1.

  You may assume that you have an infinite number of each kind of coin.


  Constraints:
  * 1 <= coins.length <= 12
  * 1 <= coins[i] <= 231 - 1
  * 0 <= amount <= 104
 */

#include <vector>

namespace leetcode {
class RecursiveCoinChange {
  public:
    RecursiveCoinChange(int n) {
      solved_subproblem = std::vector<int>(n+1, n+1);
      solved_subproblem[0] = 0;
    }
    int coinChange(std::vector<int>& coins, int amount) {
      if (solved_subproblem[amount] > amount) {
        for (int coin : coins) {
          if (coin <= amount) {
            int subproblem = coinChange(coins, amount-coin);
            if (subproblem == -1) {
              solved_subproblem[amount] = -1;
            }
            else {
              solved_subproblem[amount] = std::min(
                  subproblem+1, solved_subproblem[amount]);
            }
          }
        }
      }
      return (solved_subproblem[amount] <= amount ? 
          solved_subproblem[amount] : -1);  
    }
  private:
    std::vector<int> solved_subproblem;
};
} // namespace leetcode

#endif
