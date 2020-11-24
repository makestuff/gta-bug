#include <gtest/gtest.h>
#include <div/div.h>

TEST(Divide, verifySimpleDivide)
{
  ASSERT_EQ(20, divide(200, 10));
}
