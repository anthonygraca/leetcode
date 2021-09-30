#ifndef LEETCODE_MEDIUM_133_CLONE_GRAPH_H_
#define LEETCODE_MEDIUM_133_CLONE_GRAPH_H_

#include <vector>

namespace leetcode {
class Node {
public:
  int val;
  std::vector<Node*> neighbors;
  Node() {
    val = 0;
    neighbors = std::vector<Node*>();
  }
  Node(int val) {
    this->val = val;
    neighbors = std::vector<Node*>();
  }
  Node(int val, std::vector<Node*> neighbors) {
    this->val = val;
    this->neighbors = neighbors;
  }
};
} // namespace leetcode
#endif
