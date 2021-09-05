#include "hard/23-merge-k-sorted-lists.h"

#include "gtest/gtest.h"

#include "util/linked-list.h"

class MergeKSortedLists : public ::testing::Test {
  protected:
    std::vector<leetcode::ListNode*> input;
    leetcode::ListNode* expected = nullptr;
    leetcode::ListNode* output = nullptr;

    void TearDown() override {
      leetcode::releaseNodes(expected);
      for(auto i : input) {
        leetcode::releaseNodes(i);
      }
      input.clear();
      leetcode::releaseNodes(output);
    }
};

TEST_F(MergeKSortedLists, FirstExample) {
  input.push_back(leetcode::getLinkedListForm({1,4,5}));
  input.push_back(leetcode::getLinkedListForm({1,3,4}));
  input.push_back(leetcode::getLinkedListForm({2,6}));
  leetcode::MergeKSortedLists solution;
  expected = leetcode::getLinkedListForm({1,1,2,3,4,4,5,6});
  output = solution.mergeKLists(input);
  ASSERT_TRUE(leetcode::isEqual(expected, output));
}
