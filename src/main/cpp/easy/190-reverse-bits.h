#ifndef LEETCODE_EASY_190_REVERSE_BITS_H_
#define LEETCODE_EASY_190_REVERSE_BITS_H_

/*
  Reverse bits of a given 32 bits unsigned integer.

  Note:
  * Note that in some languages, such as Java, there is no unsigned integer 
    type. In this case, both input and output will be given as a signed 
    integer type. They should not affect your implementation, as the integer's 
    internal binary representation is the same, whether it is signed or unsigned.
  * In Java, the compiler represents the signed integers using 2's complement 
    notation. Therefore, in Example 2 above, the input represents the signed 
    integer -3 and the output represents the signed integer -1073741825.

  Constraints:
  * The input must be a binary string of length 32
 */

#include <cstdint>

namespace leetcode {
class ReverseBits {
public:
  uint32_t reverseBits(uint32_t n) {
    uint32_t expected{0b00111001011110000010100101000000};
    for (int i = 0; i < 16; i++) {
      int j = 31-i;
      if (((n >> i) & 1) != ((n >> j) & 1)) {
        auto bit_mask = (1 << i) | (1 << j);
        n ^= bit_mask;
      }
    }
    return n;
  }
};
} // namespace leetcode

#endif
