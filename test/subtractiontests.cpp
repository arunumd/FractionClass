/*!
 * @file subtractiontests.cpp
 * @author Arun Kumar Devarajulu
 * @license This project is released under the MIT License.
 * @date June 4, 2019
 * @brief This file oontains the unit test cases for subtraction operator
 * overloads of the Fraction class
 */
#include <gtest/gtest.h>
#include "fraction.h"
#include "fraction.tpp"

/*!
 *  @brief Subtraction test for two fractions of type int
 */
TEST(SubtractionTest, FractionDiff1) {
    Fraction<int> a(2, 15);
    Fraction<int> b(3, 15);
    Fraction<int> c;
    c = a - b;
    EXPECT_EQ(c.get_numerator(), -1);
    EXPECT_EQ(c.get_denominator(), 15);
}

/*!
 *  @brief Subtraction test for two fractions of type int
 */
TEST(SubtractionTest, FractionDiff2) {
    Fraction<int> a(-2, 15);
    Fraction<int> b(-9, 7);
    Fraction<int> c;
    c = a - b;
    EXPECT_EQ(c.get_numerator(), 121);
    EXPECT_EQ(c.get_denominator(), 105);
}

/*!
 *  @brief Subtraction test for two fractions of type double
 */
TEST(SubtractionTest, FractionDiff3) {
    Fraction<double> a(-8.0, 3.0);
    Fraction<double> b(-15.0, 5.0);
    Fraction<double> c;
    c = a - b;
    EXPECT_EQ(c.get_numerator(), 1.0);
    EXPECT_EQ(c.get_denominator(), 3.0);
}

/*!
 *  @brief Subtraction assignment test for two fractions of type int
 */
TEST(SubtractionTest, FractionDiff4) {
    Fraction<int> a(2, 15);
    Fraction<int> b(3, 15);
    a -= b;
    EXPECT_EQ(a.get_numerator(), -1);
    EXPECT_EQ(a.get_denominator(), 15);
}

/*!
 *  @brief Subtraction assignment test for two fractions of type int
 */
TEST(SubtractionTest, FractionDiff5) {
    Fraction<int> a(-2, 15);
    Fraction<int> b(-9, 7);
    a -= b;
    EXPECT_EQ(a.get_numerator(), 121);
    EXPECT_EQ(a.get_denominator(), 105);
}

/*!
 *  @brief Subtraction assignment test for two fractions of type double
 */
TEST(SubtractionTest, FractionDiff6) {
    Fraction<double> a(-8.0, 3.0);
    Fraction<double> b(-15.0, 5.0);
    a -= b;
    EXPECT_EQ(a.get_numerator(), 1.0);
    EXPECT_EQ(a.get_denominator(), 3.0);
}

/*!
 *  @brief Subtraction test for a constant and a fraction of types int
 */
TEST(SubtractionTest, FractionDiff7) {
    int a = 55;
    Fraction<int> b(3, 15);
    Fraction<int> c;
    c = a - b;
    EXPECT_EQ(c.get_numerator(), 274);
    EXPECT_EQ(c.get_denominator(), 5);
}

/*!
 *  @brief Subtraction test for a constant and a fraction of types int
 */
TEST(SubtractionTest, FractionDiff8) {
    int a = 55;
    Fraction<int> b(-9, 7);
    Fraction<int> c;
    c = a - b;
    EXPECT_EQ(c.get_numerator(), 394);
    EXPECT_EQ(c.get_denominator(), 7);
}

/*!
 *  @brief Subtraction test for a constant and a fraction of types double
 */
TEST(SubtractionTest, FractionDiff9) {
    double a = 55.0;
    Fraction<double> b(-15.0, 5.0);
    Fraction<double> c;
    c = a - b;
    EXPECT_EQ(c.get_numerator(), 58.0);
    EXPECT_EQ(c.get_denominator(), 1.0);
}

/*!
 *  @brief Subtraction test for a fraction and a constant of types int
 */
TEST(SubtractionTest, FractionDiff10) {
    Fraction<int> a(3, 15);
    int b = 55;
    Fraction<int> c;
    c = a - b;
    EXPECT_EQ(c.get_numerator(), -274);
    EXPECT_EQ(c.get_denominator(), 5);
}

/*!
 *  @brief Subtraction test for a fraction and a constant of types double
 */
TEST(SubtractionTest, FractionDiff11) {
    Fraction<double> a(-9.0, 7.0);
    double b = 55.0;
    Fraction<double> c;
    c = a - b;
    EXPECT_EQ(c.get_numerator(), -394.0);
    EXPECT_EQ(c.get_denominator(), 7.0);
}

/*!
 *  @brief Subtraction test for a fraction and a constant of types double
 */
TEST(SubtractionTest, FractionDiff12) {
    Fraction<double> a(-15.0, 5.0);
    double b = 55.0;
    Fraction<double> c;
    c = a - b;
    EXPECT_EQ(c.get_numerator(), -58.0);
    EXPECT_EQ(c.get_denominator(), 1.0);
}