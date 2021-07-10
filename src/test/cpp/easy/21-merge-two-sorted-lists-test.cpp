#include "easy/21-merge-two-sorted-lists.h"

#include "gtest/gtest.h"

#include "util/linked-list.h"

class MergeTwoSortedLists : public ::testing::Test {
protected:
  void TearDown() override {
    releaseNodes(l1);
    releaseNodes(l2);
    releaseNodes(expected);
    releaseNodes(actual);
  }
  leetcode::ListNode* l1 = nullptr;
  leetcode::ListNode* l2 = nullptr;
  leetcode::ListNode* expected = nullptr;
  leetcode::ListNode* actual = nullptr;
};

TEST_F(MergeTwoSortedLists, FirstExample) {
  l1 = leetcode::getLinkedListForm({1,2,4});
  l2 = leetcode::getLinkedListForm({1,3,4});
  expected = leetcode::getLinkedListForm({1,1,2,3,4,4});
  leetcode::MergeTwoLists solution;
  actual = solution.mergeTwoLists(l1, l2);
  ASSERT_TRUE(leetcode::isEqual(expected, actual));
}

/*
TEST_F(MergeTwoSortedLists, SecondExample) {
  l1 = leetcode::getLinkedListForm();
  l2 = leetcode::getLinkedListForm();
  expected = leetcode::getLinkedListForm();
  leetcode::MergeTwoLists solution;
  actual = solution.mergeTwoLists(l1, l2);
  ASSERT_TRUE(leetcode::isEqual(expected, actual));
}

TEST_F(MergeTwoSortedLists, ThirdExample) {
  l1 = leetcode::getLinkedListForm();
  l2 = leetcode::getLinkedListForm({0});
  expected = leetcode::getLinkedListForm({0});
  leetcode::MergeTwoLists solution;
  actual = solution.mergeTwoLists(l1, l2);
  ASSERT_TRUE(leetcode::isEqual(expected, actual));
}
*/
