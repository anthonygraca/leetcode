#include "medium/207-course-schedule.h"

#include "gtest/gtest.h"

#include <vector>

TEST(CourseSchedule, FirstExample) {
  int num_courses{2};
  std::vector<std::vector<int>> prerequisites{{1,0}};
  leetcode::CourseSchedule algo;
  ASSERT_TRUE(algo.canFinish(num_courses, prerequisites));
}

TEST(CourseSchedule, DISABLED_SecondExample) {
  int num_courses{2};
  std::vector<std::vector<int>> prerequisites{{1,0},{0,1}};
  leetcode::CourseSchedule algo;
  ASSERT_FALSE(algo.canFinish(num_courses, prerequisites));
}
