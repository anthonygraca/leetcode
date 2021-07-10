#ifndef LEETCODE_TEST_UTILITIES_LINKED_LIST_H_
#define LEETCODE_TEST_UTILITIES_LINKED_LIST_H_

#include "util/list-node.h"

namespace leetcode {
leetcode::ListNode* getLinkedListForm(void) {
  return nullptr;
}

leetcode::ListNode* getLinkedListForm(std::vector<int> input) {
  leetcode::ListNode* result = nullptr;
  for (int i = input.size() - 1; i >= 0; i--) {
    result = new leetcode::ListNode(input[i], result);
  }
  return result;
}

bool isEqual(leetcode::ListNode* expected, leetcode::ListNode* actual) {
  for (auto current = expected; current != nullptr; current = current->next) {
    if (current->val != actual->val) {
      return false;
    }
    actual = actual->next;
  }
  return true;
}

void releaseNodes(leetcode::ListNode* list) {
  while (list != nullptr) {
    leetcode::ListNode* currentNode = list;
    list = list->next;
    delete currentNode;
  }
}
} // namespace leetcode
#endif
