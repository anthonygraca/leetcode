#ifndef LEETCODE_HARD_23_MERGE_K_SORTED_LISTS_H_
#define LEETCODE_HARD_23_MERGE_K_SORTED_LISTS_H_

#include <queue>
#include <vector>

#include "util/list-node.h"

/*
 * [1,3,5]
 * [2,4,7]
 * [1,3,6,7]
 *
 * insert/removing from a pq is log k
 * T:(nlogk)
 * 
 *
 * BST: for every node, the child to the left is smaller, the child to the right
 *      is bigger
 *      D
 *  C      F
 * A  B  E   G
 *
 *
 * Min Heap: The parent node is always smaller than the children
 *      1
 *   2     3
 * 4   5  6  7
 */

namespace leetcode {
class MergeKSortedLists {
  public:
    ListNode* mergeKLists(std::vector<ListNode*>& lists) {
      ListNode* answer = nullptr;
      auto comp = [](ListNode* a, ListNode* b){ return a->val > b->val;};
      std::priority_queue<ListNode*, std::vector<ListNode*>, decltype(comp)> pq(comp);
      // populate pq with inital k elements
      for (int i = 0; i < lists.size(); i++) {
        if (lists[i] != nullptr) {
          pq.push(lists[i]);
        }
      }
      while (!pq.empty()) {
        ListNode* node = pq.top();
        pq.pop();
        answer = new ListNode(node->val, answer);
        if (node->next != nullptr) {
          pq.push(node->next);
        }
      }
      ListNode* current = answer;
      ListNode* next = nullptr;
      ListNode* prev = nullptr;
      while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
      }
      answer = prev;
      return answer;
    }
};
} // namespace leetcode

#endif
