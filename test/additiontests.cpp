/*!
 * @file additiontests.cpp
 * @author Arun Kumar Devarajulu
 * @license This project is released under the MIT License.
 * @date June 4, 2019
 * @brief This file oontains the unit test cases for addition operator
 * overloads of the Fraction class
 */
#include <gtest/gtest.h>
#include "fraction.h"
#include "fraction.tpp"

/*!
 *  @brief Addition test for two fractions of type int
 */
TEST(AdditionTest, FractionAdd1) {
    Fraction<int> a(2, 15);
    Fraction<int> b(3, 15);
    Fraction<int> c;
    c = a + b;
    EXPECT_EQ(c.get_numerator(), 1);
    EXPECT_EQ(c.get_denominator(), 3);
}

/*!
 *  @brief Addition test for two fractions of type int
 */
TEST(AdditionTest, FractionAdd2) {
    Fraction<int> a(-2, 15);
    Fraction<int> b(-9, 7);
    Fraction<int> c;
    c = a + b;
    EXPECT_EQ(c.get_numerator(), -149);
    EXPECT_EQ(c.get_denominator(), 105);
}

/*!
 *  @brief Addition test for two fractions of type double
 */
TEST(AdditionTest, FractionAdd3) {
    Fraction<double> a(-8.0, 3.0);
    Fraction<double> b(-15.0, 5.0);
    Fraction<double> c;
    c = a + b;
    EXPECT_EQ(c.get_numerator(), -17);
    EXPECT_EQ(c.get_denominator(), 3);
}

/*!
 *  @brief Addition assignment test for two fractions of type int
 */
TEST(AdditionTest, FractionAdd4) {
    Fraction<int> a(2, 15);
    Fraction<int> b(3, 15);
    a += b;
    EXPECT_EQ(a.get_numerator(), 1);
    EXPECT_EQ(a.get_denominator(), 3);
}

/*!
 *  @brief Addition assignment test for two fractions of type int
 */
TEST(AdditionTest, FractionAdd5) {
    Fraction<int> a(-2, 15);
    Fraction<int> b(-9, 7);
    a += b;
    EXPECT_EQ(a.get_numerator(), -149);
    EXPECT_EQ(a.get_denominator(), 105);
}

/*!
 *  @brief Addition assignment test for two fractions of type double
 */
TEST(AdditionTest, FractionAdd6) {
    Fraction<double> a(-8.0, 3.0);
    Fraction<double> b(-15.0, 5.0);
    a += b;
    EXPECT_EQ(a.get_numerator(), -17);
    EXPECT_EQ(a.get_denominator(), 3);
}

/*!
 *  @brief Addition test for a constant and a fraction of type int
 */
TEST(AdditionTest, FractionAdd7) {
    int a = 55;
    Fraction<int> b(3, 15);
    Fraction<int> c;
    c = a + b;
    EXPECT_EQ(c.get_numerator(), 276);
    EXPECT_EQ(c.get_denominator(), 5);
}

/*!
 *  @brief Addition test for a constant and a fraction of type int
 */
TEST(AdditionTest, FractionAdd8) {
    int a = 55;
    Fraction<int> b(-9, 7);
    Fraction<int> c;
    c = a + b;
    EXPECT_EQ(c.get_numerator(), 376);
    EXPECT_EQ(c.get_denominator(), 7);
}

/*!
 *  @brief Addition test for a constant and a fraction of type double
 */
TEST(AdditionTest, FractionAdd9) {
    double a = 55.0;
    Fraction<double> b(-15.0, 5.0);
    Fraction<double> c;
    c = a + b;
    EXPECT_EQ(c.get_numerator(), 52);
    EXPECT_EQ(c.get_denominator(), 1);
}

/*!
 *  @brief Addition test for a constant and a fraction of type int
 */
TEST(AdditionTest, FractionAdd10) {
    int b = 55;
    Fraction<int> a(3, 15);
    Fraction<int> c;
    c = a + b;
    EXPECT_EQ(c.get_numerator(), 276);
    EXPECT_EQ(c.get_denominator(), 5);
}

/*!
 *  @brief Addition test for a constant and a fraction of type double
 */
TEST(AdditionTest, FractionAdd11) {
    double b = 55.0;
    Fraction<double> a(-9.0, 7.0);
    Fraction<double> c;
    c = a + b;
    EXPECT_EQ(c.get_numerator(), 376.0);
    EXPECT_EQ(c.get_denominator(), 7.0);
}

/*!
 *  @brief Addition test for a constant and a fraction of type double
 */
TEST(AdditionTest, FractionAdd12) {
    double b = 55.0;
    Fraction<double> a(-15.0, 5.0);
    Fraction<double> c;
    c = a + b;
    EXPECT_EQ(c.get_numerator(), 52);
    EXPECT_EQ(c.get_denominator(), 1);
}