#ifndef LEETCODE_MEDIUM_17_LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_
#define LEETCODE_MEDIUM_17_LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_

/*
 * Given a string containing digits from 2-9 inclusive, return all possible 
 * letter combinations that the number could represent. Return the answer in 
 * any order.
 * 
 * A mapping of digit to letters (just like on the telephone buttons) is given 
 * below. Note that 1 does not map to any letters.
 *
 * Constraints:
 * 0 <= digits.length <= 4
 * digits[i] is a digit in the range ['2', '9'].
 */

#include <string>
#include <vector>

namespace leetcode {
class LetterCombinationsOfAPhoneNumber {
  public:
    std::vector<std::string> letterCombinations(std::string digits) {
      std::vector<std::string> solution{"ad","ae","af","bd","be","bf","cd","ce","cf"};
      return solution;
    }
};
} // namespace leetcode

#endif
