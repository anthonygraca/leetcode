#ifndef LEETCODE_EASY_206_REVERSE_LINKED_LIST_H_
#define LEETCODE_EASY_206_REVERSE_LINKED_LIST_H_

#include "util/list-node.h"

namespace leetcode {
class ReverseLinkedList {
  public:
    ListNode* reverseList(ListNode* head) {
      if (head == nullptr || head->next == nullptr) {
        return head;
      }
      ListNode* current = head;
      ListNode* prev = nullptr;
      ListNode* next = nullptr;
      while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
      }
      return prev;
    }
};
} // namespace leetcode
#endif
