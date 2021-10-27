#include "easy/190-reverse-bits.h"

#include "gtest/gtest.h"

#include <cstdint>

TEST(ReverseBits, FirstExample) {
  uint32_t n{0b00000010100101000001111010011100};
  leetcode::ReverseBits algo;
  uint32_t expected{0b00111001011110000010100101000000};
  ASSERT_EQ(expected, algo.reverseBits(n));
}

