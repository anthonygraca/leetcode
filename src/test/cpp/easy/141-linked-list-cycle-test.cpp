#include "easy/141-linked-list-cycle.h"

#include "gtest/gtest.h"

#include "util/linked-list.h"

TEST(LinkedListCycle, FirstExample) {
  leetcode::ListNode a{3};
  leetcode::ListNode b{2};
  leetcode::ListNode c{0};
  leetcode::ListNode d{-4};
  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &b;
  leetcode::LinkedListCycle algo;
  ASSERT_TRUE(algo.hasCycle(&a));
}

TEST(LinkedListCycle, SecondExample) {
  leetcode::ListNode a{1};
  leetcode::ListNode b{2};
  a.next = &b;
  b.next = &a;
  leetcode::LinkedListCycle algo;
  ASSERT_TRUE(algo.hasCycle(&a));
}

TEST(LinkedListCycle, ThirdExample) {
  leetcode::ListNode a{1};
  leetcode::LinkedListCycle algo;
  ASSERT_FALSE(algo.hasCycle(&a));
}
