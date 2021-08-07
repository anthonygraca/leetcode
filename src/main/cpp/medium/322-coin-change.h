#ifndef LEETCODE_MEDIUM_322_COIN_CHANGE_H_
#define LEETCODE_MEDIUM_322_COIN_CHANGE_H_

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

/* amount == 11
 * coins == [1, 2, 5]
 * running_amount (subproblem represents index): [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
 * number_of_coins_needed:                       [1, 1, 2, 2, 1, 2, 2, 3, 3, 2 , 3]
 */

namespace leetcode {
class CoinChange {
  public:
    int coinChange(std::vector<int>& coins, int amount) {
      if (amount == 0) return 0;
      std::vector<int> solution_to_subproblems(amount+1, amount+1);
      int coin_count = 0;
      for (int i = 1; i < amount+1; i++) {
        int local_amount = amount;
        for (int j = 0; j >= 0; j--) {
        }
      }
    }
};
} // namespace leetcode

#endif
