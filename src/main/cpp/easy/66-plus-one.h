#ifndef LEETCODE_EASY_66_PLUS_ONE_H_
#define LEETCODE_EASY_66_PLUS_ONE_H_

#include <vector>

namespace leetcode {
class PlusOne {
public:
  std::vector<int> plusOne(std::vector<int>& input) {
    int last_index = input.size() - 1;
    if (input[last_index] < 9) {
      input[last_index]++;
      return input;
    }
    while (input[last_index] == 9) {
      input[last_index] = 0;
      last_index--;
    }
    if (last_index < 0) {
      input.insert(input.begin(), 1);
    }
    else {
      input[last_index]++;
    }

    return input;
  }
}; 
} // namespace leetcode

#endif
