#include <gtest/gtest.h>
#include "Fraction.h"
#include "Fraction.tpp"

TEST(DivisionTest, FractionDivision1) {
  Fraction<int> a(2, 15);
  Fraction<int> b(3, 15);
  Fraction<int> c;
  c = a / b;
  EXPECT_EQ(c.get_numerator(), 2);
  EXPECT_EQ(c.get_denominator(), 3);
}

TEST(DivisionTest, FractionDivision2) {
  Fraction<int> a(-2, 15);
  Fraction<int> b(-9, 7);
  Fraction<int> c;
  c = a / b;
  EXPECT_EQ(c.get_numerator(), 14);
  EXPECT_EQ(c.get_denominator(), 135);
}

TEST(DivisionTest, FractionDivision3) {
  Fraction<float> a(-8.0, 3.0);
  Fraction<float> b(-15.0, 5.0);
  Fraction<float> c;
  c = a / b;
  EXPECT_EQ(c.get_numerator(), 8);
  EXPECT_EQ(c.get_denominator(), 9);
}

TEST(DivisionTest, FractionDivision4) {
  Fraction<int> a(2, 15);
  Fraction<int> b(3, 15);
  a /= b;
  EXPECT_EQ(a.get_numerator(), 2);
  EXPECT_EQ(a.get_denominator(), 3);
}

TEST(DivisionTest, FractionDivision5) {
  Fraction<int> a(-2, 15);
  Fraction<int> b(-9, 7);
  a /= b;
  EXPECT_EQ(a.get_numerator(), 14);
  EXPECT_EQ(a.get_denominator(), 135);
}

TEST(DivisionTest, FractionDivision6) {
  Fraction<float> a(-8.0, 3.0);
  Fraction<float> b(-15.0, 5.0);
  a /= b;
  EXPECT_EQ(a.get_numerator(), 8);
  EXPECT_EQ(a.get_denominator(), 9);
}

TEST(DivisionTest, FractionDivision7) {
  int a = 55;
  Fraction<int> b(3, 15);
  Fraction<int> c;
  c = a / b;
  EXPECT_EQ(c.get_numerator(), 275);
  EXPECT_EQ(c.get_denominator(), 1);
}

TEST(DivisionTest, FractionDivision8) {
  int a = 55;
  Fraction<int> b(-9, 7);
  Fraction<int> c;
  c = a / b;
  EXPECT_EQ(c.get_numerator(), -385);
  EXPECT_EQ(c.get_denominator(), 9);
}

TEST(DivisionTest, FractionDivision9) {
  float a = 55.0;
  Fraction<float> b(-15.0, 5.0);
  Fraction<float> c;
  c = a / b;
  EXPECT_EQ(c.get_numerator(), -55);
  EXPECT_EQ(c.get_denominator(), 3);
}

TEST(DivisionTest, FractionDivision10) {
  int b = 55;
  Fraction<int> a(3, 15);
  Fraction<int> c;
  c = a / b;
  EXPECT_EQ(c.get_numerator(), 1);
  EXPECT_EQ(c.get_denominator(), 275);
}

TEST(DivisionTest, FractionDivision11) {
  int b = 55;
  Fraction<int> a(-9, 7);
  Fraction<int> c;
  c = a / b;
  EXPECT_EQ(c.get_numerator(), -9);
  EXPECT_EQ(c.get_denominator(), 385);
}

TEST(DivisionTest, FractionDivision12) {
  float b = 55.0;
  Fraction<float> a(-15.0, 5.0);
  Fraction<float> c;
  c = a / b;
  EXPECT_EQ(c.get_numerator(), -3);
  EXPECT_EQ(c.get_denominator(), 55);
}