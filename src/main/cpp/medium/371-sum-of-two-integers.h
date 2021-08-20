#ifndef LEETCODE_MEDIUM_371_SUM_OF_TWO_INTEGERS_H_
#define LEETCODE_MEDIUM_371_SUM_OF_TWO_INTEGERS_H_

/*
 * Given two integers a and b, return the sum of the two integers without using 
 * the operators + and -.
 *
 * Constaints:
 * • -1000 <= a, b <= 1000
 */

/*
 * We are building a full adder.
 *
 *                                  -----------
 * A half-adder has the truth table:  | 0 | 1 |
 *    *This is an XOR               -----------
 *                                  0 | 0 | 1 |
 *                                  -----------
 *                                  1 | 1 | 0 |
 *                                  -----------
 *
 * To handle the carry, we need a truth table like: -------------
 *    *THis is an AND                               |   | 0 | 1 |
 *                                                  -------------
 *                                                  | 0 | 0 | 0 |
 *                                                  -------------
 *                                                  | 1 | 0 | 1 |
 *                                                  -------------
 */

#include <cstdint>

namespace leetcode {
class SumOfTwoIntegers {
  public:
    uint32_t getSum(uint32_t a, uint32_t b) {
      uint32_t half_adder = a ^ b; // caret is the symbol for xor
      uint32_t carry = ((a & b) & 0x7FFFFFFF) << 1;
      while (carry > 0) {
        uint32_t temp = half_adder;
        half_adder = temp ^ carry;
        carry = ((temp & carry) & 0x7FFFFFF) << 1;
      }
      return half_adder;
    }
};
} // namespace leetcode

#endif
