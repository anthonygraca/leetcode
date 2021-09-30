#include "medium/133-clone-graph.h"

#include "gtest/gtest.h"

TEST(CloneGraph, FirstExample) {
  leetcode::Node a(1);
  leetcode::Node b(2);
  leetcode::Node c(3);
  leetcode::Node d(4);
  a.neighbors.push_back(&b); 
  a.neighbors.push_back(&d);
  b.neighbors.push_back(&a);
  b.neighbors.push_back(&c);
  c.neighbors.push_back(&b);
  c.neighbors.push_back(&d);
  d.neighbors.push_back(&a);
  d.neighbors.push_back(&c);


}
