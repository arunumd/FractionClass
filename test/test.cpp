#include <gtest/gtest.h>
#include "Fraction.h"
#include "Fraction.tpp"

TEST(AdditionTest, FractionAdd1) {
  Fraction<int> a(2, 15);
  Fraction<int> b(3, 15);
  Fraction<int> c;
  c = a + b;
  EXPECT_EQ(c.get_numerator(), 5);
  EXPECT_EQ(c.get_denominator(), 15);
}
