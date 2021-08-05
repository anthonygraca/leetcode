#include "medium/371-sum-of-two-integers.h"

#include "gtest/gtest.h"

TEST(SumOfTwoIntegers, FirstExample) {
  int a{1};
  int b{2};
  leetcode::SumOfTwoIntegers solution;
  int expected{3};
  ASSERT_EQ(expected, solution.getSum(a,b));
}

/*
TEST(SumOfTwoIntegers, SecondExample) {
  int a{2};
  int b{3};
  leetcode::SumOfTwoIntegers solution;
  int expected{5};
  ASSERT_EQ(expected, solution.getSum(a,b));
}
*/
