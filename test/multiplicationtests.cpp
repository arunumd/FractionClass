#include <gtest/gtest.h>
#include "Fraction.h"
#include "Fraction.tpp"

TEST(MultiplicationTest, FractionProduct1) {
  Fraction<int> a(2, 15);
  Fraction<int> b(3, 15);
  Fraction<int> c;
  c = a * b;
  EXPECT_EQ(c.get_numerator(), 2);
  EXPECT_EQ(c.get_denominator(), 75);
}

TEST(MultiplicationTest, FractionProduct2) {
  Fraction<int> a(-2, 15);
  Fraction<int> b(-9, 7);
  Fraction<int> c;
  c = a * b;
  EXPECT_EQ(c.get_numerator(), 6);
  EXPECT_EQ(c.get_denominator(), 35);
}

TEST(MultiplicationTest, FractionProduct3) {
  Fraction<float> a(-8.0, 3.0);
  Fraction<float> b(-15.0, 5.0);
  Fraction<float> c;
  c = a * b;
  EXPECT_EQ(c.get_numerator(), 8);
  EXPECT_EQ(c.get_denominator(), 1);
}

TEST(MultiplicationTest, FractionProduct4) {
  Fraction<int> a(2, 15);
  Fraction<int> b(3, 15);
  a *= b;
  EXPECT_EQ(a.get_numerator(), 2);
  EXPECT_EQ(a.get_denominator(), 75);
}

TEST(MultiplicationTest, FractionProduct5) {
  Fraction<int> a(-2, 15);
  Fraction<int> b(-9, 7);
  a *= b;
  EXPECT_EQ(a.get_numerator(), 6);
  EXPECT_EQ(a.get_denominator(), 35);
}

TEST(MultiplicationTest, FractionProduct6) {
  Fraction<float> a(-8.0, 3.0);
  Fraction<float> b(-15.0, 5.0);
  a *= b;
  EXPECT_EQ(a.get_numerator(), 8);
  EXPECT_EQ(a.get_denominator(), 1);
}

TEST(MultiplicationTest, FractionProduct7) {
  int a = 55;
  Fraction<int> b(3, 15);
  Fraction<int> c;
  c = a * b;
  EXPECT_EQ(c.get_numerator(), 11);
  EXPECT_EQ(c.get_denominator(), 1);
}

TEST(MultiplicationTest, FractionProduct8) {
  int a = 55;
  Fraction<int> b(-9, 7);
  Fraction<int> c;
  c = a * b;
  EXPECT_EQ(c.get_numerator(), -495);
  EXPECT_EQ(c.get_denominator(), 7);
}

TEST(MultiplicationTest, FractionProduct9) {
  float a = 55.0;
  Fraction<float> b(-15.0, 5.0);
  Fraction<float> c;
  c = a * b;
  EXPECT_EQ(c.get_numerator(), -165);
  EXPECT_EQ(c.get_denominator(), 1);
}

TEST(MultiplicationTest, FractionProduct10) {
  int b = 55;
  Fraction<int> a(3, 15);
  Fraction<int> c;
  c = a * b;
  EXPECT_EQ(c.get_numerator(), 11);
  EXPECT_EQ(c.get_denominator(), 1);
}

TEST(MultiplicationTest, FractionProduct11) {
  int b = 55;
  Fraction<int> a(-9, 7);
  Fraction<int> c;
  c = a * b;
  EXPECT_EQ(c.get_numerator(), -495);
  EXPECT_EQ(c.get_denominator(), 7);
}

TEST(MultiplicationTest, FractionProduct12) {
  float b = 55.0;
  Fraction<float> a(-15.0, 5.0);
  Fraction<float> c;
  c = a * b;
  EXPECT_EQ(c.get_numerator(), -165);
  EXPECT_EQ(c.get_denominator(), 1);
}