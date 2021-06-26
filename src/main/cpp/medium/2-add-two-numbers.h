#ifndef LEETCODE_MEDIUM_2_ADD_TWO_NUMBERS_H_
#define LEETCODE_MEDIUM_2_ADD_TWO_NUMBERS_H_

/*
  You are given two non-empty linked lists representing two non-negative 
  integers. The digits are stored in reverse order, and each of their nodes 
  contains a single digit. Add the two numbers and return the sum as a linked 
  list.

  You may assume the two numbers do not contain any leading zero, except the 
  number 0 itself.

  Constraints:

  * The number of nodes in each linked list is in the range [1, 100].
  * 0 <= Node.val <= 9
  * It is guaranteed that the list represents a number that does not have 
    leading zeros.
 */

namespace leetcode {
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class AddTwoNumbers {
  public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* answer = new ListNode(0, nullptr);
    ListNode* head = answer;
    int carry_over = 0;
    while (l1 || l2) {
      int operand_1 = 0;
      int operand_2 = 0;
      if (l1 != nullptr) {
        operand_1 = l1->val;
        l1 = l1->next;
      }
      if (l2 != nullptr) {
        operand_2 = l2->val;
        l2 = l2->next;
      }
      int sum = operand_1 + operand_2 + carry_over;
      answer->next = new ListNode(sum % 10, nullptr);
      answer = answer->next;
      if (sum / 10 > 0) {
        carry_over = 1;
      }
      else {
        carry_over = 0;
      }
    }
    if (carry_over) {
      answer->next = new ListNode(carry_over, nullptr);
      answer = answer->next;
    }
    ListNode* old_head = head;
    head = head->next;
    delete old_head;
    return head;
  }
};
} // namespace leetcode

#endif
