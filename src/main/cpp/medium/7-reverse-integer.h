#ifndef LEETCODE_MEDIUM_7_REVERSE_INTEGER_H_
#define LEETCODE_MEDIUM_7_REVERSE_INTEGER_H_

#include <limits>

namespace leetcode {
class ReverseInteger {
public:
  int reverse(int x) {
    int result = 0;
    constexpr int max = std::numeric_limits<int>::max() / 10;
    constexpr int min = std::numeric_limits<int>::min() / 10;

    while (x != 0) {
      if (result > max || result < min) return 0;
      result = (result * 10) + x % 10;
      x /= 10;
    }
    return result;
  }
};
} // namespace leetcode

#endif
