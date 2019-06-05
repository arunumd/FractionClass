#include <gtest/gtest.h>
#include "Fraction.h"
#include "Fraction.tpp"

TEST(SubtractionTest, FractionDiff1) {
  Fraction<int> a(2, 15);
  Fraction<int> b(3, 15);
  Fraction<int> c;
  c = a - b;
  EXPECT_EQ(c.get_numerator(), -1);
  EXPECT_EQ(c.get_denominator(), 15);
}

TEST(SubtractionTest, FractionDiff2) {
  Fraction<int> a(-2, 15);
  Fraction<int> b(-9, 7);
  Fraction<int> c;
  c = a - b;
  EXPECT_EQ(c.get_numerator(), 121);
  EXPECT_EQ(c.get_denominator(), 105);
}

TEST(SubtractionTest, FractionDiff3) {
  Fraction<float> a(-8.0, 3.0);
  Fraction<float> b(-15.0, 5.0);
  Fraction<float> c;
  c = a - b;
  EXPECT_EQ(c.get_numerator(), 1);
  EXPECT_EQ(c.get_denominator(), 3);
}

TEST(SubtractionTest, FractionDiff4) {
  Fraction<int> a(2, 15);
  Fraction<int> b(3, 15);
  a -= b;
  EXPECT_EQ(a.get_numerator(), -1);
  EXPECT_EQ(a.get_denominator(), 15);
}

TEST(SubtractionTest, FractionDiff5) {
  Fraction<int> a(-2, 15);
  Fraction<int> b(-9, 7);
  a -= b;
  EXPECT_EQ(a.get_numerator(), 121);
  EXPECT_EQ(a.get_denominator(), 105);
}

TEST(SubtractionTest, FractionDiff6) {
  Fraction<float> a(-8.0, 3.0);
  Fraction<float> b(-15.0, 5.0);
  a -= b;
  EXPECT_EQ(a.get_numerator(), 1);
  EXPECT_EQ(a.get_denominator(), 3);
}

TEST(SubtractionTest, FractionDiff7) {
  int a = 55;
  Fraction<int> b(3, 15);
  Fraction<int> c;
  c = a - b;
  EXPECT_EQ(c.get_numerator(), 274);
  EXPECT_EQ(c.get_denominator(), 5);
}

TEST(SubtractionTest, FractionDiff8) {
  int a = 55;
  Fraction<int> b(-9, 7);
  Fraction<int> c;
  c = a - b;
  EXPECT_EQ(c.get_numerator(), 394);
  EXPECT_EQ(c.get_denominator(), 7);
}

TEST(SubtractionTest, FractionDiff9) {
  float a = 55.0;
  Fraction<float> b(-15.0, 5.0);
  Fraction<float> c;
  c = a - b;
  EXPECT_EQ(c.get_numerator(), 58);
  EXPECT_EQ(c.get_denominator(), 1);
}

TEST(SubtractionTest, FractionDiff10) {
  int b = 55;
  Fraction<int> a(3, 15);
  Fraction<int> c;
  c = a - b;
  EXPECT_EQ(c.get_numerator(), -274);
  EXPECT_EQ(c.get_denominator(), 5);
}

TEST(SubtractionTest, FractionDiff11) {
  int b = 55;
  Fraction<int> a(-9, 7);
  Fraction<int> c;
  c = a - b;
  EXPECT_EQ(c.get_numerator(), -394);
  EXPECT_EQ(c.get_denominator(), 7);
}

TEST(SubtractionTest, FractionDiff12) {
  float b = 55.0;
  Fraction<float> a(-15.0, 5.0);
  Fraction<float> c;
  c = a - b;
  EXPECT_EQ(c.get_numerator(), -58);
  EXPECT_EQ(c.get_denominator(), 1);
}