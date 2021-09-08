#include "easy/206-reverse-linked-list.h"

#include "gtest/gtest.h"

#include "util/linked-list.h"

TEST(ReverseLinkedList, FirstExample) {
  leetcode::ListNode* input = leetcode::getLinkedListForm({1,2,3,4,5});
  leetcode::ReverseLinkedList solution;
  leetcode::ListNode* expected = leetcode::getLinkedListForm({5,4,3,2,1});
  ASSERT_TRUE(leetcode::isEqual(solution.reverseList(input), expected));
  leetcode::releaseNodes(input);
  leetcode::releaseNodes(expected);
}

TEST(ReverseLinkedList, DISABLED_SecondExample) {
  leetcode::ListNode* input = leetcode::getLinkedListForm({1,2});
  leetcode::ReverseLinkedList solution;
  leetcode::ListNode* expected = leetcode::getLinkedListForm({2,1});
  ASSERT_TRUE(leetcode::isEqual(solution.reverseList(input), expected));
  leetcode::releaseNodes(input);
  leetcode::releaseNodes(expected);
}

TEST(ReverseLinkedList, ThirdExample) {
  leetcode::ListNode* input = nullptr;
  leetcode::ReverseLinkedList solution;
  leetcode::ListNode* expected = nullptr;
  ASSERT_TRUE(leetcode::isEqual(solution.reverseList(input), expected));
}
