#include "medium/2-add-two-numbers.h"

#include "gtest/gtest.h"

#include <vector>

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
  private:
    void releaseNodes(leetcode::ListNode* list) {
      while (list != nullptr) {
        leetcode::ListNode* currentNode = list;
	list = list->next;
	delete currentNode;
      }
    }
};

leetcode::ListNode* getLinkedListForm(std::vector<int>);
bool isEqual(leetcode::ListNode*, leetcode::ListNode*);

TEST_F(AddTwoNumbers, FirstExample) {
  l1 = getLinkedListForm({2, 4, 3});
  l2 = getLinkedListForm({5, 6, 4});
  expected_output = getLinkedListForm({7,0,8});
  leetcode::AddTwoNumbers solution;
  actual_output = solution.addTwoNumbers(l1, l2);
  ASSERT_TRUE(isEqual(expected_output, actual_output));
}

TEST_F(AddTwoNumbers, SecondExample) {
  l1 = getLinkedListForm({0});
  l2 = getLinkedListForm({0});
  expected_output = getLinkedListForm({0});
  leetcode::AddTwoNumbers solution;
  actual_output = solution.addTwoNumbers(l1, l2);
  ASSERT_TRUE(isEqual(expected_output, actual_output));
}

TEST_F(AddTwoNumbers, ThirdExample) {
  l1 = getLinkedListForm({9, 9, 9, 9, 9, 9, 9});
  l2 = getLinkedListForm({9, 9, 9, 9});
  expected_output = getLinkedListForm({8, 9, 9, 9, 0, 0, 0, 1});
  leetcode::AddTwoNumbers solution;
  actual_output = solution.addTwoNumbers(l1, l2);
  ASSERT_TRUE(isEqual(expected_output, actual_output));
}

leetcode::ListNode* getLinkedListForm(std::vector<int> input) {
  leetcode::ListNode* result = nullptr;
  for (int i = input.size() - 1; i >= 0; i--) {
    result = new leetcode::ListNode(input[i], result);
  }
  return result;
}

bool isEqual(leetcode::ListNode* expected, leetcode::ListNode* actual) {
  for (auto current = expected; current != nullptr; current = current->next) {
    if (current->val != actual->val) {
      return false;
    }
    actual = actual->next;
  }
  return true;
}
