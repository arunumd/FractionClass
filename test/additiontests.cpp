#include <gtest/gtest.h>
#include "Fraction.h"
#include "Fraction.tpp"

TEST(AdditionTest, FractionAdd1) {
  Fraction<int> a(2, 15);
  Fraction<int> b(3, 15);
  Fraction<int> c;
  c = a + b;
  EXPECT_EQ(c.get_numerator(), 1);
  EXPECT_EQ(c.get_denominator(), 3);
}

TEST(AdditionTest, FractionAdd2) {
  Fraction<int> a(-2, 15);
  Fraction<int> b(-9, 7);
  Fraction<int> c;
  c = a + b;
  EXPECT_EQ(c.get_numerator(), -149);
  EXPECT_EQ(c.get_denominator(), 105);
}

TEST(AdditionTest, FractionAdd3) {
  Fraction<float> a(-8.0, 3.0);
  Fraction<float> b(-15.0, 5.0);
  Fraction<float> c;
  c = a + b;
  EXPECT_EQ(c.get_numerator(), -17);
  EXPECT_EQ(c.get_denominator(), 3);
}

TEST(AdditionTest, FractionAdd4) {
  Fraction<int> a(2, 15);
  Fraction<int> b(3, 15);
  a += b;
  EXPECT_EQ(a.get_numerator(), 1);
  EXPECT_EQ(a.get_denominator(), 3);
}

TEST(AdditionTest, FractionAdd5) {
  Fraction<int> a(-2, 15);
  Fraction<int> b(-9, 7);
  a += b;
  EXPECT_EQ(a.get_numerator(), -149);
  EXPECT_EQ(a.get_denominator(), 105);
}

TEST(AdditionTest, FractionAdd6) {
  Fraction<float> a(-8.0, 3.0);
  Fraction<float> b(-15.0, 5.0);
  a += b;
  EXPECT_EQ(a.get_numerator(), -17);
  EXPECT_EQ(a.get_denominator(), 3);
}

TEST(AdditionTest, FractionAdd7) {
  int a = 55;
  Fraction<int> b(3, 15);
  Fraction<int> c;
  c = a + b;
  EXPECT_EQ(c.get_numerator(), 276);
  EXPECT_EQ(c.get_denominator(), 5);
}

TEST(AdditionTest, FractionAdd8) {
  int a = 55;
  Fraction<int> b(-9, 7);
  Fraction<int> c;
  c = a + b;
  EXPECT_EQ(c.get_numerator(), 376);
  EXPECT_EQ(c.get_denominator(), 7);
}

TEST(AdditionTest, FractionAdd9) {
  float a = 55.0;
  Fraction<float> b(-15.0, 5.0);
  Fraction<float> c;
  c = a + b;
  EXPECT_EQ(c.get_numerator(), 52);
  EXPECT_EQ(c.get_denominator(), 1);
}

TEST(AdditionTest, FractionAdd10) {
  int b = 55;
  Fraction<int> a(3, 15);
  Fraction<int> c;
  c = a + b;
  EXPECT_EQ(c.get_numerator(), 276);
  EXPECT_EQ(c.get_denominator(), 5);
}

TEST(AdditionTest, FractionAdd11) {
  int b = 55;
  Fraction<int> a(-9, 7);
  Fraction<int> c;
  c = a + b;
  EXPECT_EQ(c.get_numerator(), 376);
  EXPECT_EQ(c.get_denominator(), 7);
}

TEST(AdditionTest, FractionAdd12) {
  float b = 55.0;
  Fraction<float> a(-15.0, 5.0);
  Fraction<float> c;
  c = a + b;
  EXPECT_EQ(c.get_numerator(), 52);
  EXPECT_EQ(c.get_denominator(), 1);
}