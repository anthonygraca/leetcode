#include "hard/23-merge-k-sorted-lists.h"

#include "gtest/gtest.h"

#include "util/linked-list.h"

TEST(MergeKSortedLists, FirstExample) {
  std::vector<leetcode::ListNode*> input;
  input.push_back(leetcode::getLinkedListForm({1,4,5}));
  input.push_back(leetcode::getLinkedListForm({1,3,4}));
  input.push_back(leetcode::getLinkedListForm({2,6}));
  leetcode::MergeKSortedLists solution;
  leetcode::ListNode* expected = leetcode::getLinkedListForm({1,1,2,3,4,4,5,6});
  leetcode::ListNode* output = solution.mergeKLists(input);
  ASSERT_TRUE(leetcode::isEqual(expected, output));
  leetcode::releaseNodes(expected);
  for(auto i : input) {
    leetcode::releaseNodes(i);
  }
  leetcode::releaseNodes(output);
}
