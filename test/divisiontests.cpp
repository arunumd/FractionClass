/*!
 * @file divisiontests.cpp
 * @author Arun Kumar Devarajulu
 * @license This project is released under the MIT License.
 * @date June 4, 2019
 * @brief This file oontains the unit test cases for division operator
 * overloads of the Fraction class
 */
#include <gtest/gtest.h>
#include "fraction.h"
#include "fraction.tpp"

/*!
 *  @brief Division test for two fractions of types int
 */
TEST(DivisionTest, FractionDivision1) {
    Fraction<int> a(2, 15);
    Fraction<int> b(3, 15);
    Fraction<int> c;
    c = a / b;
    EXPECT_EQ(c.get_numerator(), 2);
    EXPECT_EQ(c.get_denominator(), 3);
}

/*!
 *  @brief Division test for two fractions of types int
 */
TEST(DivisionTest, FractionDivision2) {
    Fraction<int> a(-2, 15);
    Fraction<int> b(-9, 7);
    Fraction<int> c;
    c = a / b;
    EXPECT_EQ(c.get_numerator(), 14);
    EXPECT_EQ(c.get_denominator(), 135);
}

/*!
 *  @brief Division test for two fractions of types double
 */
TEST(DivisionTest, FractionDivision3) {
    Fraction<double> a(-8.0, 3.0);
    Fraction<double> b(-15.0, 5.0);
    Fraction<double> c;
    c = a / b;
    EXPECT_EQ(c.get_numerator(), 8);
    EXPECT_EQ(c.get_denominator(), 9);
}

/*!
 *  @brief Division assignment test for two fractions of types int
 */
TEST(DivisionTest, FractionDivision4) {
    Fraction<int> a(2, 15);
    Fraction<int> b(3, 15);
    a /= b;
    EXPECT_EQ(a.get_numerator(), 2);
    EXPECT_EQ(a.get_denominator(), 3);
}

/*!
 *  @brief Division assignment test for two fractions of types int
 */
TEST(DivisionTest, FractionDivision5) {
    Fraction<int> a(-2, 15);
    Fraction<int> b(-9, 7);
    a /= b;
    EXPECT_EQ(a.get_numerator(), 14);
    EXPECT_EQ(a.get_denominator(), 135);
}

/*!
 *  @brief Division assignment test for two fractions of types double
 */
TEST(DivisionTest, FractionDivision6) {
    Fraction<double> a(-8.0, 3.0);
    Fraction<double> b(-15.0, 5.0);
    a /= b;
    EXPECT_EQ(a.get_numerator(), 8.0);
    EXPECT_EQ(a.get_denominator(), 9.0);
}

/*!
 *  @brief Division test for a constant and a fraction of types int
 */
TEST(DivisionTest, FractionDivision7) {
    int a = 55;
    Fraction<int> b(3, 15);
    Fraction<int> c;
    c = a / b;
    EXPECT_EQ(c.get_numerator(), 275);
    EXPECT_EQ(c.get_denominator(), 1);
}

/*!
 *  @brief Division test for a constant and a fraction of types int
 */
TEST(DivisionTest, FractionDivision8) {
    int a = 55;
    Fraction<int> b(-9, 7);
    Fraction<int> c;
    c = a / b;
    EXPECT_EQ(c.get_numerator(), -385);
    EXPECT_EQ(c.get_denominator(), 9);
}

/*!
 *  @brief Division test for a constant and a fraction of types double
 */
TEST(DivisionTest, FractionDivision9) {
    double a = 55.0;
    Fraction<double> b(-15.0, 5.0);
    Fraction<double> c;
    c = a / b;
    EXPECT_EQ(c.get_numerator(), -55.0);
    EXPECT_EQ(c.get_denominator(), 3.0);
}

/*!
 *  @brief Division test for a fraction and a constant of types int
 */
TEST(DivisionTest, FractionDivision10) {
    Fraction<int> a(3, 15);
    int b = 55;
    Fraction<int> c;
    c = a / b;
    EXPECT_EQ(c.get_numerator(), 1);
    EXPECT_EQ(c.get_denominator(), 275);
}

/*!
 *  @brief Division test for a fraction and a constant of types int
 */
TEST(DivisionTest, FractionDivision11) {
    Fraction<int> a(-9, 7);
    int b = 55;
    Fraction<int> c;
    c = a / b;
    EXPECT_EQ(c.get_numerator(), -9);
    EXPECT_EQ(c.get_denominator(), 385);
}

/*!
 *  @brief Division test for a fraction and a constant of types double
 */
TEST(DivisionTest, FractionDivision12) {
    Fraction<double> a(-15.0, 5.0);
    double b = 55.0;
    Fraction<double> c;
    c = a / b;
    EXPECT_EQ(c.get_numerator(), -3);
    EXPECT_EQ(c.get_denominator(), 55);
}