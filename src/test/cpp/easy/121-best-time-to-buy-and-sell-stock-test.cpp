#include "easy/121-best-time-to-buy-and-sell-stock.h"

#include "gtest/gtest.h"

TEST(BestTimeToBuyAndSellStock, FirstExample) {
  std::vector<int> nums{7,1,5,3,6,4};
  leetcode::BestTimeToBuyAndSellStock solution;
  int expected{5};
  ASSERT_EQ(expected, solution.maxProfit(nums));
}

TEST(BestTimeToBuyAndSellStock, DISABLED_SecondExample) {
  std::vector<int> nums{7,6,4,3,1};
  leetcode::BestTimeToBuyAndSellStock solution;
  int expected{0};
  ASSERT_EQ(expected, solution.maxProfit(nums));
}
