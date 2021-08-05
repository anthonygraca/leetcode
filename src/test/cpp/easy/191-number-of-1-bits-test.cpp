#include "easy/191-number-of-1-bits.h"

#include "gtest/gtest.h"

/*
 * Explanation: The input binary string 00000000000000000000000000001011 has a 
 *              total of three '1' bits.
 */
TEST(NumberOf1Bits, FirstExample) {
  uint32_t n{0b00000000000000000000000000001011};
  leetcode::NumberOf1Bits solution;
  int expected{3};
  ASSERT_EQ(expected, solution.hammingWeight(n));
}
/*
 * Explanation: The input binary string 00000000000000000000000010000000 has a 
 *              total of one '1' bit.
TEST(NumberOf1Bits, SecondExample) {
  uint32_t n{0b00000000000000000000000010000000};
  leetcode::NumberOf1Bits solution;
  int expected{1};
  ASSERT_EQ(expected, solution.hammingWeight(n));
}

 * Explanation: The input binary string 11111111111111111111111111111101 has a 
 *              total of thirty one '1' bits.
TEST(NumberOf1Bits, ThirdExample) {
  uint32_t n{0b11111111111111111111111111111101};
  leetcode::NumberOf1Bits solution;
  int expected{31};
  ASSERT_EQ(expected, solution.hammingWeight(n));
}
*/
