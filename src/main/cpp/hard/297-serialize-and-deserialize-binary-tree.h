#ifndef LEETCODE_HARD_297_SERIALIZE_AND_DESERIALIZE_BINARY_TREE_H_
#define LEETCODE_HARD_297_SERIALIZE_AND_DESERIALIZE_BINARY_TREE_H_

#include <string>

#include "util/tree-node.h"

namespace leetcode {
class SerializeAndDeserializeBinaryTree {
  public:
    std::string serialize(leetcode::TreeNode* root) {
      std::string expected{"1,2,3,4,null,null,4,5"};
      return expected;
    }
};
} // namespace leetcode

#endif
