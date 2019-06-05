/*!
 * @file multiplicationtests.cpp
 * @author Arun Kumar Devarajulu
 * @license This project is released under the MIT License.
 * @date June 4, 2019
 * @brief This file oontains the unit test cases for multiplication operator
 * overloads of the Fraction class
 */
#include <gtest/gtest.h>
#include "fraction.h"
#include "fraction.tpp"

/*!
 *  @brief Multiplication test for two fractions of types int
 */
TEST(MultiplicationTest, FractionProduct1) {
    Fraction<int> a(2, 15);
    Fraction<int> b(3, 15);
    Fraction<int> c;
    c = a * b;
    EXPECT_EQ(c.get_numerator(), 2);
    EXPECT_EQ(c.get_denominator(), 75);
}

/*!
 *  @brief Multiplication test for two fractions of types int
 */
TEST(MultiplicationTest, FractionProduct2) {
    Fraction<int> a(-2, 15);
    Fraction<int> b(-9, 7);
    Fraction<int> c;
    c = a * b;
    EXPECT_EQ(c.get_numerator(), 6);
    EXPECT_EQ(c.get_denominator(), 35);
}

/*!
 *  @brief Multiplication test for two fractions of types double
 */
TEST(MultiplicationTest, FractionProduct3) {
    Fraction<double> a(-8.0, 3.0);
    Fraction<double> b(-15.0, 5.0);
    Fraction<double> c;
    c = a * b;
    EXPECT_EQ(c.get_numerator(), 8);
    EXPECT_EQ(c.get_denominator(), 1);
}

/*!
 *  @brief Multiplication assignment test for two fractions of types int
 */
TEST(MultiplicationTest, FractionProduct4) {
    Fraction<int> a(2, 15);
    Fraction<int> b(3, 15);
    a *= b;
    EXPECT_EQ(a.get_numerator(), 2);
    EXPECT_EQ(a.get_denominator(), 75);
}

/*!
 *  @brief Multiplication assignment test for two fractions of types int
 */
TEST(MultiplicationTest, FractionProduct5) {
    Fraction<int> a(-2, 15);
    Fraction<int> b(-9, 7);
    a *= b;
    EXPECT_EQ(a.get_numerator(), 6);
    EXPECT_EQ(a.get_denominator(), 35);
}

/*!
 *  @brief Multiplication assignment test for two fractions of types double
 */
TEST(MultiplicationTest, FractionProduct6) {
    Fraction<double> a(-8.0, 3.0);
    Fraction<double> b(-15.0, 5.0);
    a *= b;
    EXPECT_EQ(a.get_numerator(), 8.0);
    EXPECT_EQ(a.get_denominator(), 1.0);
}

/*!
 *  @brief Multiplication test for a constant and a fraction of types int
 */
TEST(MultiplicationTest, FractionProduct7) {
    int a = 55;
    Fraction<int> b(3, 15);
    Fraction<int> c;
    c = a * b;
    EXPECT_EQ(c.get_numerator(), 11);
    EXPECT_EQ(c.get_denominator(), 1);
}

/*!
 *  @brief Multiplication test for a constant and a fraction of types int
 */
TEST(MultiplicationTest, FractionProduct8) {
    int a = 55;
    Fraction<int> b(-9, 7);
    Fraction<int> c;
    c = a * b;
    EXPECT_EQ(c.get_numerator(), -495);
    EXPECT_EQ(c.get_denominator(), 7);
}

/*!
 *  @brief Multiplication test for a constant and a fraction of types double
 */
TEST(MultiplicationTest, FractionProduct9) {
    double a = 55.0;
    Fraction<double> b(-15.0, 5.0);
    Fraction<double> c;
    c = a * b;
    EXPECT_EQ(c.get_numerator(), -165.0);
    EXPECT_EQ(c.get_denominator(), 1.0);
}

/*!
 *  @brief Multiplication test for a fraction and a constant of types int
 */
TEST(MultiplicationTest, FractionProduct10) {
    Fraction<int> a(3, 15);
    int b = 55;
    Fraction<int> c;
    c = a * b;
    EXPECT_EQ(c.get_numerator(), 11);
    EXPECT_EQ(c.get_denominator(), 1);
}

/*!
 *  @brief Multiplication test for a fraction and a constant of types int
 */
TEST(MultiplicationTest, FractionProduct11) {
    Fraction<int> a(-9, 7);
    int b = 55;
    Fraction<int> c;
    c = a * b;
    EXPECT_EQ(c.get_numerator(), -495);
    EXPECT_EQ(c.get_denominator(), 7);
}

/*!
 *  @brief Multiplication test for a fraction and a constant of types double
 */
TEST(MultiplicationTest, FractionProduct12) {
    Fraction<double> a(-15.0, 5.0);
    double b = 55.0;
    Fraction<double> c;
    c = a * b;
    EXPECT_EQ(c.get_numerator(), -165.0);
    EXPECT_EQ(c.get_denominator(), 1.0);
}