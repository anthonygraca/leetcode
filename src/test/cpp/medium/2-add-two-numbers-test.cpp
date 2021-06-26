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

TEST_F(AddTwoNumbers, FirstExample) {
  std::vector<int> input1{2, 4, 3};
  std::vector<int> input2{5, 6, 4};
  std::vector<int> output{7, 0, 8};
  l1 = getLinkedListForm(input1);
  l2 = getLinkedListForm(input2);
  expected_output = getLinkedListForm(output);
  leetcode::AddTwoNumbers solution;
  actual_output = solution.addTwoNumbers(l1, l2);
  ASSERT_TRUE(isEqual(expected_output, actual_output));
}

TEST_F(AddTwoNumbers, SecondExample) {
  std::vector<int> input1{0};
  std::vector<int> input2{0};
  std::vector<int> output{0};
  l1 = getLinkedListForm(input1);
  l2 = getLinkedListForm(input2);
  expected_output = getLinkedListForm(output);
  leetcode::AddTwoNumbers solution;
  actual_output = solution.addTwoNumbers(l1, l2);
  ASSERT_TRUE(isEqual(expected_output, actual_output));
}

TEST_F(AddTwoNumbers, ThirdExample) {
  std::vector<int> input1{9, 9, 9, 9, 9, 9, 9};
  std::vector<int> input2{9, 9, 9, 9};
  std::vector<int> output{8, 9, 9, 9, 0, 0, 0, 1};
  l1 = getLinkedListForm(input1);
  l2 = getLinkedListForm(input2);
  expected_output = getLinkedListForm(output);
  leetcode::AddTwoNumbers solution;
  actual_output = solution.addTwoNumbers(l1, l2);
  ASSERT_TRUE(isEqual(expected_output, actual_output));
}
