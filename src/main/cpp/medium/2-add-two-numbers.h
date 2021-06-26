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

#include <stack>

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
    return reverseDigits(sumDigits(l1, l2));
  }
  ListNode* reverseDigits(std::stack<int> stack) {
    ListNode* answer = nullptr;
    while (!stack.empty()) {
      answer = new ListNode(stack.top(), answer);
      stack.pop();
    }
    return answer;
  }
  std::stack<int> sumDigits(ListNode* l1, ListNode* l2) {
    std::stack<int> stack;
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
      stack.push(sum % 10);
      if (sum / 10 > 0) {
        carry_over = 1;
      }
      else {
        carry_over = 0;
      }
    }
    if (carry_over) {
      stack.push(carry_over);
    }
    return stack;
  }
};
} // namespace leetcode

#endif
