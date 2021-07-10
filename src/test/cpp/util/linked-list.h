#ifndef LEETCODE_TEST_UTILITIES_LINKED_LIST_H_
#define LEETCODE_TEST_UTILITIES_LINKED_LIST_H_

namespace leetcode {
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
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
} // namespace leetcode
#endif
