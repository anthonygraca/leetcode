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

namespace leetcode {
class SumOfTwoIntegers {
  public:
    int getSum(int a, int b) {
      int half_adder = a ^ b; // caret is the symbol for xor
      int carry = a & b;
      int temp = 0;
      int count = 0;
      while (carry > 0) {
        temp = half_adder ^ (carry << 1);
        carry = half_adder & (carry << 1);
        half_adder = temp;
      }
      return half_adder;
    }
};
} // namespace leetcode

#endif
