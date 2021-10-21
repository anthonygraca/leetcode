#ifndef LEETCODE_EASY_141_LINKED_LIST_CYCLE_H_
#define LEETCODE_EASY_141_LINKED_LIST_CYCLE_H_

#include <unordered_set>

#include "util/list-node.h"

namespace leetcode {
class LinkedListCycle {
public:
  bool hasCycle(leetcode::ListNode* node) {
    if (node == nullptr) return false;
    while (node->next != nullptr) {
      if (m_marked.find(node) == m_marked.end()) return true;
      m_marked.insert(node);
      node = node->next;
    }
    return false;
  }
private:
  std::unordered_set<leetcode::ListNode*> m_marked;
};
} // namespace leetcode

#endif
