#include "medium/2-add-two-numbers.h"

#include "gtest/gtest.h"

#include <vector>

#include "util/linked-list.h"

class AddTwoNumbers : public ::testing::Test {
  protected:
    void TearDown() override {
      releaseNodes(l1);
      releaseNodes(l2);
      releaseNodes(expected_output);
      releaseNodes(actual_output);
    }
    leetcode::ListNode* l1 = nullptr;
    leetcode::ListNode* l2 = nullptr;
    leetcode::ListNode* expected_output = nullptr;
    leetcode::ListNode* actual_output = nullptr;
};

TEST_F(AddTwoNumbers, FirstExample) {
  l1 = leetcode::getLinkedListForm({2, 4, 3});
  l2 = leetcode::getLinkedListForm({5, 6, 4});
  expected_output = leetcode::getLinkedListForm({7,0,8});
  leetcode::AddTwoNumbers solution;
  actual_output = solution.addTwoNumbers(l1, l2);
  ASSERT_TRUE(leetcode::isEqual(expected_output, actual_output));
}

TEST_F(AddTwoNumbers, SecondExample) {
  l1 = leetcode::getLinkedListForm({0});
  l2 = leetcode::getLinkedListForm({0});
  expected_output = leetcode::getLinkedListForm({0});
  leetcode::AddTwoNumbers solution;
  actual_output = solution.addTwoNumbers(l1, l2);
  ASSERT_TRUE(leetcode::isEqual(expected_output, actual_output));
}

TEST_F(AddTwoNumbers, ThirdExample) {
  l1 = leetcode::getLinkedListForm({9, 9, 9, 9, 9, 9, 9});
  l2 = leetcode::getLinkedListForm({9, 9, 9, 9});
  expected_output = leetcode::getLinkedListForm({8, 9, 9, 9, 0, 0, 0, 1});
  leetcode::AddTwoNumbers solution;
  actual_output = solution.addTwoNumbers(l1, l2);
  ASSERT_TRUE(leetcode::isEqual(expected_output, actual_output));
}
