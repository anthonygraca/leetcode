#ifndef LEETCODE_EASY_104_MAXIMUM_DEPTH_OF_BINARY_TREE_H_
#define LEETCODE_EASY_104_MAXIMUM_DEPTH_OF_BINARY_TREE_H_

#include "util/tree-node.h"

namespace leetcode {
class MaximumDepthOfBinaryTree {
  public:
    int maxDepth(TreeNode* node) {
      if (node == nullptr) {
        return 0;
      }
      return 1;
    }
};
} // namespace leetcode

#endif
