#ifndef LEETCODE_EASY_21_MERGE_TWO_SORTED_LISTS_H_
#define LEETCODE_EASY_21_MERGE_TWO_SORTED_LISTS_H_

/*
  Merge two sorted linked lists and return it as a sorted list. The list should
  be made by splicing together the nodes of the first two lists.

  Constraints:

  * The number of nodes in both lists is in the range [0, 50].
  * -100 <= Node.val <= 100
  * Both l1 and l2 are sorted in non-decreasing order.
 */

#include "util/list-node.h"

#include <stack>

namespace leetcode {
class MergeTwoLists {
public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* answer = nullptr;
    std::stack<int> stack;
    while (l1 && l2) {
      if (l1->val < l2->val) {
        stack.push(l1->val);
        l1 = l1->next;
      }
      else {
        stack.push(l2->val);
        l2 = l2->next;
      }
    }
    while (l1 || l2) {
      if (l1) {
        stack.push(l1->val);
        l1 = l1->next;
      }
      else {
        stack.push(l2->val);
        l2 = l2->next;
      }
    }
    while (!stack.empty()) {
      answer = new ListNode(stack.top(), answer);
      stack.pop();
    }
    return answer;
  }
};
} // namespace leetcode

#endif
