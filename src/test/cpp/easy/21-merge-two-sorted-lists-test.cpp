#include "easy/21-merge-two-sorted-lists.h"

#include "gtest/gtest.h"

#include "util/linked-list.h"

TEST(MergeTwoSortedLists, FirstExample) {
  leetcode::ListNode* l1 = leetcode::getLinkedListForm({1,2,4});
  leetcode::ListNode* l2 = leetcode::getLinkedListForm({1,3,4});
  leetcode::ListNode* expected = leetcode::getLinkedListForm({1,1,2,3,4,4});
  leetcode::MergeTwoLists solution;
  leetcode::ListNode* actual = solution.mergeTwoLists(l1, l2);
  ASSERT_TRUE(leetcode::isEqual(expected, actual));
}
