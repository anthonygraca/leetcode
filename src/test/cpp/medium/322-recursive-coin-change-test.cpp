#include "medium/322-recursive-coin-change.h"

#include "gtest/gtest.h"

/*
 * Explanation:
 * 11 = 5 + 5 + 1
 */
TEST(RecursiveCoinChange, FirstExample) {
  std::vector<int> coins{1, 2, 5};
  int amount{11};
  leetcode::RecursiveCoinChange solution{amount};
  int expected{3};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
}

TEST(RecursiveCoinChange, SecondExample) {
  std::vector<int> coins{2};
  int amount{3};
  leetcode::RecursiveCoinChange solution{amount};
  int expected{-1};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
}

TEST(RecursiveCoinChange, ThirdExample) {
  std::vector<int> coins{1};
  int amount{0};
  leetcode::RecursiveCoinChange solution{amount};
  int expected{0};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
}

TEST(RecursiveCoinChange, FourthExample) {
  std::vector<int> coins{1};
  int amount{1};
  leetcode::RecursiveCoinChange solution{amount};
  int expected{1};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
}

TEST(RecursiveCoinChange, FifthExample) {
  std::vector<int> coins{1};
  int amount{2};
  leetcode::RecursiveCoinChange solution{amount};
  int expected{2};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
}

TEST(RecursiveCoinChange, DynamicBetterThanGreedy) {
  std::vector<int> coins{1, 5, 8};
  int amount{10};
  leetcode::RecursiveCoinChange solution{amount};
  int expected{2};
  ASSERT_EQ(expected, solution.coinChange(coins, amount));
}
