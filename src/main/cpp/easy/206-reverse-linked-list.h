#ifndef LEETCODE_EASY_206_REVERSE_LINKED_LIST_H_
#define LEETCODE_EASY_206_REVERSE_LINKED_LIST_H_

#include "util/list-node.h"

namespace leetcode {
class ReverseLinkedList {
  public:
    ListNode* reverseList(ListNode* head) {
      ListNode* answer = nullptr;
      answer = new ListNode(1, answer);
      answer = new ListNode(2, answer);
      answer = new ListNode(3, answer);
      answer = new ListNode(4, answer);
      answer = new ListNode(5, answer);
      return answer;
    }
    
};
} // namespace leetcode
#endif
