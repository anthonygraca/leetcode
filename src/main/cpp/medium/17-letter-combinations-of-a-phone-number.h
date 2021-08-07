#ifndef LEETCODE_MEDIUM_17_LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_
#define LEETCODE_MEDIUM_17_LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_

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
