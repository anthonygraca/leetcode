#ifndef LEETCODE_EASY_141_LINKED_LIST_CYCLE_H_
#define LEETCODE_EASY_141_LINKED_LIST_CYCLE_H_

#include "util/list-node.h"

namespace leetcode {
class LinkedListCycle {
public:
  bool hasCycle(leetcode::ListNode* node) {
    if (node == nullptr) return false;
    if (node->next == nullptr) return false;
    auto tortoise = node;
    auto hare = node->next;
    while (tortoise != hare) {
      if (hare->next == nullptr || hare->next->next == nullptr) return false;
      hare = hare->next->next;
      tortoise = tortoise->next;
    }
    return true;
  }
};
} // namespace leetcode

#endif
