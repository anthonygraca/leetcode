#include "medium/322-coin-change.h"

#include "gtest/gtest.h"

/*
 * Explanation:
 * 11 = 5 + 5 + 1
 */
/*
TEST(CoinChange, FirstExample) {
  std::vector<int> coins{1, 2, 5};
  int amount{11};
  leetcode::CoinChange solution;
  int expected{3};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
}

TEST(CoinChange, SecondExample) {
  std::vector<int> coins{2};
  int amount{3};
  leetcode::CoinChange solution;
  int expected{-1};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
}
*/

TEST(CoinChange, ThirdExample) {
  std::vector<int> coins{1};
  int amount{0};
  leetcode::CoinChange solution;
  int expected{0};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
}

/*
TEST(CoinChange, FourthExample) {
  std::vector<int> coins{1};
  int amount{1};
  leetcode::CoinChange solution;
  int expected{1};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
}

TEST(CoinChange, FifthExample) {
  std::vector<int> coins{1};
  int amount{2};
  leetcode::CoinChange solution;
  int expected{2};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
}

TEST(CoinChange, DynamicBetterThanGreedy) {
  std::vector<int> coins{1, 5, 8};
  int amount{10};
  leetcode::CoinChange solution;
  int expected{2};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
*/
