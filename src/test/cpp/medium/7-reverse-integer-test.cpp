#include "medium/7-reverse-integer.h"

#include "gtest/gtest.h"

TEST(ReverseInteger, FirstExample) {
  leetcode::ReverseInteger algo;
  ASSERT_EQ(321, algo.reverse(123));
}

TEST(ReverseInteger, SecondExample) {
  leetcode::ReverseInteger algo;
  ASSERT_EQ(-123, algo.reverse(-321));
}

TEST(ReverseInteger, ThirdExample) {
  leetcode::ReverseInteger algo;
  ASSERT_EQ(21, algo.reverse(120));
}

TEST(ReverseInteger, FourthExample) {
  leetcode::ReverseInteger algo;
  ASSERT_EQ(0, algo.reverse(0));
}

TEST(ReverseInteger, FifthExample) {
  leetcode::ReverseInteger algo;
  ASSERT_EQ(0, algo.reverse(-2147483648));
}

TEST(ReverseInteger, SixthExample) {
  leetcode::ReverseInteger algo;
  ASSERT_EQ(0, algo.reverse(1534236469));
}
