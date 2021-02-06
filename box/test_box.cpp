#include "box.h"
#include <gtest/gtest.h>
namespace {
  /**
   * @brief Construct a test case for empty constructor
   * 
   */
TEST(Box, Empty_Cosnstructor) {
    Box B1;
  EXPECT_EQ(0, B1.length());
  EXPECT_EQ(0, B1.breadth());
  EXPECT_EQ(0, B1.height());
}
/**
 * @brief Construct a test case for parameterised constructor from given input
 * 
 */

TEST(Box, Parameterized_Cosnstructor) {
    Box B1(1,2,3);
  EXPECT_EQ(1, B1.length());
  EXPECT_EQ(2, B1.height());
  EXPECT_EQ(3, B1.breadth());
}
/**
 * @brief Construct a new TEST case for copy constructor
 * 
 */
TEST(Box, Copy_Cosnstructor) {
    Box B1(1,2,3);
    Box B2(B1);
  EXPECT_EQ(1, B2.length());
  EXPECT_EQ(2, B2.height());
  EXPECT_EQ(3, B2.breadth());
}
}