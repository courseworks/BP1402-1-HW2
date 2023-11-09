// test/add_two_numbers_test.cpp
#include <gtest/gtest.h>
#include "../include/add_two_numbers.h"

TEST(TestSuite, AddTwoNumbers) {
  int a = 1;
  int b = 2;
  int expected_result = 3;

  int actual_result = add_two_numbers(a, b);

  EXPECT_EQ(expected_result, actual_result);
}