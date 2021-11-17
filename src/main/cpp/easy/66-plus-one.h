#ifndef LEETCODE_EASY_66_PLUS_ONE_H_
#define LEETCODE_EASY_66_PLUS_ONE_H_

#include <vector>

namespace leetcode {
class PlusOne {
public:
  std::vector<int> plusOne(std::vector<int>& input) {
    ++input.back();
    for(int i = input.size() - 1; i > 0; i--) {
      if (input[i] == 10) {
        input[i] = 0;
        input[i-1]++;
      }
    }
    if (input[0] == 10) {
      input[0] = 0;
      input.insert(input.begin(), 1);
    }
    return input;
  }
}; 
} // namespace leetcode

#endif
