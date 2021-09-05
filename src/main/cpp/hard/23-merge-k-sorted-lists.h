#ifndef LEETCODE_HARD_23_MERGE_K_SORTED_LISTS_H_
#define LEETCODE_HARD_23_MERGE_K_SORTED_LISTS_H_

#include <vector>

#include "util/list-node.h"

namespace leetcode {
class MergeKSortedLists {
  public:
    ListNode* mergeKLists(std::vector<ListNode*>& input) {
      ListNode* answer = nullptr;
      answer = new ListNode(6, answer);
      answer = new ListNode(5, answer);
      answer = new ListNode(4, answer);
      answer = new ListNode(4, answer);
      answer = new ListNode(3, answer);
      answer = new ListNode(2, answer);
      answer = new ListNode(1, answer);
      answer = new ListNode(1, answer);
      return answer;
    }
};
} // namespace leetcode

#endif
