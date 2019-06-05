#include <gtest/gtest.h>
#include "Fraction.h"
#include "Fraction.tpp"

TEST(GreaterTest, FractionGreater1) {
  Fraction<int> a(2, 15);
  Fraction<int> b(3, 15);
  EXPECT_FALSE(a > b);
}

TEST(GreaterTest, FractionGreater2) {
  Fraction<int> a(9, 15);
  Fraction<int> b(3, 15);
  EXPECT_TRUE(a > b);
}

TEST(GreaterTest, FractionGreater3) {
  int a {5};
  Fraction<int> b(3, 15);
  EXPECT_TRUE(a > b);
}

TEST(GreaterTest, FractionGreater4) {
  int a {2};
  Fraction<int> b(20, 4);
  EXPECT_FALSE(a > b);
}

TEST(GreaterTest, FractionGreater5) {
  Fraction<int> a(3, 15);
  int b {5};
  EXPECT_FALSE(a > b);
}

TEST(GreaterTest, FractionGreater6) {
  Fraction<int> a(20, 4);
  int b {2};
  EXPECT_TRUE(a > b);
}

TEST(LesserTest, FractionLesser1) {
  Fraction<int> a(2, 15);
  Fraction<int> b(3, 15);
  EXPECT_TRUE(a < b);
}

TEST(LesserTest, FractionLesser2) {
  Fraction<int> a(9, 15);
  Fraction<int> b(3, 15);
  EXPECT_FALSE(a < b);
}

TEST(LesserTest, FractionLesser3) {
  int a {5};
  Fraction<int> b(3, 15);
  EXPECT_FALSE(a < b);
}

TEST(LesserTest, FractionLesser4) {
  int a {2};
  Fraction<int> b(20, 4);
  EXPECT_TRUE(a < b);
}

TEST(LesserTest, FractionLesser5) {
  Fraction<int> a(3, 15);
  int b {5};
  EXPECT_TRUE(a < b);
}

TEST(LesserTest, FractionLesser6) {
  Fraction<int> a(20, 4);
  int b {2};
  EXPECT_FALSE(a < b);
}

TEST(EqualityTest, FractionEqual1) {
  Fraction<int> a(20, 4);
  int b {2};
  EXPECT_FALSE(a == b);
}

TEST(EqualityTest, FractionEqual2) {
  Fraction<int> a(20, 10);
  int b {2};
  EXPECT_TRUE(a == b);
}

TEST(EqualityTest, FractionEqual3) {
  int a {2};
  Fraction<int> b(20, 4);
  EXPECT_FALSE(a == b);
}

TEST(EqualityTest, FractionEqual4) {
  int a {2};
  Fraction<int> b(20, 10);
  EXPECT_TRUE(a == b);
}