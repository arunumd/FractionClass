/*!
 * @file comparisontests.cpp
 * @author Arun Kumar Devarajulu
 * @license This project is released under the MIT License.
 * @date June 4, 2019
 * @brief This file oontains the unit test cases for comparison operator
 * overloads of the Fraction class
 */
#include <gtest/gtest.h>
#include "fraction.h"
#include "fraction.tpp"

/*!
 *  @brief Greater than test for two fractions of types int
 */
TEST(GreaterTest, FractionGreater1) {
    Fraction<int> a(2, 15);
    Fraction<int> b(3, 15);
    EXPECT_FALSE(a > b);
}

/*!
 *  @brief Greater than test for two fractions of types int
 */
TEST(GreaterTest, FractionGreater2) {
    Fraction<int> a(9, 15);
    Fraction<int> b(3, 15);
    EXPECT_TRUE(a > b);
}

/*!
 *  @brief Greater than test for a constant and a fraction of types int
 */
TEST(GreaterTest, FractionGreater3) {
    int a{5};
    Fraction<int> b(3, 15);
    EXPECT_TRUE(a > b);
}

/*!
 *  @brief Greater than test for a constant and a fraction of types int
 */
TEST(GreaterTest, FractionGreater4) {
    int a{2};
    Fraction<int> b(20, 4);
    EXPECT_FALSE(a > b);
}

/*!
 *  @brief Greater than test for a fraction and a constant of types int
 */
TEST(GreaterTest, FractionGreater5) {
    Fraction<int> a(3, 15);
    int b{5};
    EXPECT_FALSE(a > b);
}

/*!
 *  @brief Greater than test for a fraction and a constant of types int
 */
TEST(GreaterTest, FractionGreater6) {
    Fraction<int> a(20, 4);
    int b{2};
    EXPECT_TRUE(a > b);
}

/*!
 *  @brief Lesser than test for two fractions of types int
 */
TEST(LesserTest, FractionLesser1) {
    Fraction<int> a(2, 15);
    Fraction<int> b(3, 15);
    EXPECT_TRUE(a < b);
}

/*!
 *  @brief Lesser than test for two fractions of types int
 */
TEST(LesserTest, FractionLesser2) {
    Fraction<int> a(9, 15);
    Fraction<int> b(3, 15);
    EXPECT_FALSE(a < b);
}

/*!
 *  @brief Lesser than test for a constant and a fraction of types int
 */
TEST(LesserTest, FractionLesser3) {
    int a{5};
    Fraction<int> b(3, 15);
    EXPECT_FALSE(a < b);
}

/*!
 *  @brief Lesser than test for a constant and a fraction of types int
 */
TEST(LesserTest, FractionLesser4) {
    int a{2};
    Fraction<int> b(20, 4);
    EXPECT_TRUE(a < b);
}

/*!
 *  @brief Lesser than test for a fraction and a constant of types int
 */
TEST(LesserTest, FractionLesser5) {
    Fraction<int> a(3, 15);
    int b{5};
    EXPECT_TRUE(a < b);
}

/*!
 *  @brief Lesser than test for a fraction and a constant of types int
 */
TEST(LesserTest, FractionLesser6) {
    Fraction<int> a(20, 4);
    int b{2};
    EXPECT_FALSE(a < b);
}

/*!
 *  @brief Equality test for a fraction and a constant of types int
 */
TEST(EqualityTest, FractionEqual1) {
    Fraction<int> a(20, 4);
    int b{2};
    EXPECT_FALSE(a == b);
}

/*!
 *  @brief Equality test for a fraction and a constant of types int
 */
TEST(EqualityTest, FractionEqual2) {
    Fraction<int> a(20, 10);
    int b{2};
    EXPECT_TRUE(a == b);
}

/*!
 *  @brief Equality test for a constant and a fraction of types int
 */
TEST(EqualityTest, FractionEqual3) {
    int a{2};
    Fraction<int> b(20, 4);
    EXPECT_FALSE(a == b);
}

/*!
 *  @brief Equality test for a constant and a fraction of types int
 */
TEST(EqualityTest, FractionEqual4) {
    int a{2};
    Fraction<int> b(20, 10);
    EXPECT_TRUE(a == b);
}

/*!
 *  @brief Inequality test for a fraction and a constant of types int
 */
TEST(InequalityTest, FractionInequal1) {
    Fraction<int> a(20, 4);
    int b{2};
    EXPECT_TRUE(a != b);
}

/*!
 *  @brief Inequality test for a fraction and a constant of types int
 */
TEST(InequalityTest, FractionInequal2) {
    Fraction<int> a(20, 10);
    int b{2};
    EXPECT_FALSE(a != b);
}

/*!
 *  @brief Inequality test for a constant and a fraction of types int
 */
TEST(InequalityTest, FractionInequal3) {
    int a{2};
    Fraction<int> b(20, 4);
    EXPECT_TRUE(a != b);
}

/*!
 *  @brief Inequality test for a constant and a fraction of types int
 */
TEST(InequalityTest, FractionInequal4) {
    int a{2};
    Fraction<int> b(20, 10);
    EXPECT_FALSE(a != b);
}
