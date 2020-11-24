#include <gtest/gtest.h>
#include <mul/mul.h>

TEST(Multiply, verifySimpleMultiplication)
{
  ASSERT_EQ(200, multiply(10, 20));
}
