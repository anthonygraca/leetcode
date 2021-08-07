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
 * running(subproblem represents index): [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
 * number_of_coins:                      [0, 1, 1, 2, 2, 1, 2, 2, 3, 3, 2 , 3]
 */

namespace leetcode {
class CoinChange {
  public:
    int coinChange(std::vector<int>& coins, int amount) {
      if (amount == 0) return 0;
      std::vector<int> subsolution(amount+1, amount+1);
      subsolution[0] = 0;
      for (int i = 1; i < amount+1; i++) {
        for (int j = 0; j < coins.size(); j++) {
          if (coins[j] <= i)
            subsolution[i] = std::min(subsolution[i-coins[j]] + 1, subsolution[i]);
        }
      }
      return (subsolution[amount] <= amount ? subsolution[amount] : -1);  
    }
};
} // namespace leetcode

#endif
