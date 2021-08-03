#ifndef LEETCODE_EASY_121_BEST_TIME_TO_BUY_AND_SELL_STOCK_H_
#define LEETCODE_EASY_121_BEST_TIME_TO_BUY_AND_SELL_STOCK_H_

/*
  You are given an array prices where prices[i] is the price of a given stock 
  on the ith day.

  You want to maximize your profit by choosing a single day to buy one stock 
  and choosing a different day in the future to sell that stock.

  Return the maximum profit you can achieve from this transaction. If you 
  cannot achieve any profit, return 0.

  Constraints:
  * 1 <= prices.length <= 10^5
  * 0 <= prices[i] <= 10^4
 */

#include <algorithm>
#include <limits>
#include <vector>

namespace leetcode {
class BestTimeToBuyAndSellStock {
public:
  int maxProfit(std::vector<int>& nums) {
    int profit = 0;
    int buy_low = std::numeric_limits<int>::max();
    for (auto num : nums) {
      if (buy_low > num) {
        buy_low = num;
      }
      else {
        profit = std::max(profit, num - buy_low);
      }
    }
    return profit;
  }
};
} // namespace leetcode

#endif
