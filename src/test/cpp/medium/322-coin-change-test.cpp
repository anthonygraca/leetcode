#include "medium/322-coin-change.h"

#include "gtest/gtest.h"

/*
 * Explanation:
 * 11 = 5 + 5 + 1
 */
TEST(CoinChange, FirstExample) {
  std::vector<int> coins{1, 2, 5};
  int amount{11};
  leetcode::CoinChange solution;
  int expected{3};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
}
