#ifndef LEETCODE_EASY_9_PALINDROME_NUMBER_H_
#define LEETCODE_EASY_9_PALINDROME_NUMBER_H_

/*
  Given an integer x, return true if x is palindrome integer.

  An integer is a palindrome when it reads the same backward as forward. For example, 
  121 is palindrome while 123 is not.


  Constraints:
  * -2^31 <= x <= 2^31 - 1
 */

#include <cmath>

namespace leetcode {
class PalindromeNumber {
public:
  bool isPalindrome(int x) {
    if (x < 0) return false;
    int digits_place = std::pow(10, std::floor(std::log10(x)));
    while (digits_place > 0) {
      int lsd = x % 10;
      int msd = x / digits_place;
      if (lsd != msd) return false;
      x = x - msd * digits_place;
      x = x - lsd;
      x /= 10;
      digits_place /= 100;
    }
    return true;
  }
};
} // namespace leetcode

#endif
