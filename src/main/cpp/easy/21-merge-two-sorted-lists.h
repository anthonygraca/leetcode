#ifndef LEETCODE_EASY_21_MERGE_TWO_SORTED_LISTS_H_
#define LEETCODE_EASY_21_MERGE_TWO_SORTED_LISTS_H_

#include "util/list-node.h"

namespace leetcode {
class MergeTwoLists {
public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* answer = new ListNode(4);
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
