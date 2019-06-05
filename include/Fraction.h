//
// Created by arunk on 05/30/2019.
//

#ifndef FRACTION_FRACTION_H
#define FRACTION_FRACTION_H

#include <iostream>

template<typename T1>
class Fraction {
private:
    /*!
     * @brief Euclid's algorithm for calculating GCD of given fraction
     * @param num1 being the numerator
     * @param num2 being the denominator
     * @return The GCD of the given fraction
     * */
    T1 GCD(T1 num1, T1 num2) {
        while (num1 != num2) {
            if (num1 > num2) num1 -= num2;
            else num2 -= num1;
        }
        gcd = num1;
        return num1;
    }

    /*! @brief Variable for holding numerator of fraction */
    T1 numerator;

    /*! @brief Variable for holding denominator of fraction */
    T1 denominator;

    /*! @brief Variable to store the obtained GCD */
    T1 gcd = 1;

public:
    T1 get_numerator() const { return numerator; }

    T1 get_denominator() const { return denominator; }

    /*!
     * @brief Default constructor for the Fraction class. The constructor accepts
     * the numerator and denominator from input and uses the GCD function (Euclid's
     * Algorithm) to evaluate for the GCD. Later the constructor packages the given
     * inputs (numerator & denominator) into the lowest possible fraction based on
     * the GCD which is obtained.
     * @param num1 being the numerator
     * @param num2 being the denominator
     */
    explicit Fraction(T1 num1 = 1, T1 num2 = 1);

    T1 get_gcd() { return gcd; }

    /*!
     * @brief Operator overload for casting the fraction into int data type
     * @return The input fraction after casting into an int data type
     */
    explicit operator int() { return static_cast<int> (numerator) / denominator; }

    /*!
     * @brief Operator overload for casting the fraction into float data type
     * @return The input fraction after casting into a float data type
     */
    explicit operator float() { return static_cast<float> (numerator) / denominator; }

    /*!
     * @brief Operator overload for casting the fraction into double data type
     * @return The input fraction after casting into a double data type
     */
    explicit operator double() { return static_cast<double> (numerator) / denominator; }

    /*!
     * @brief Operator overload for casting the fraction into long data type
     * @return The input fraction after casting into a long data type
     */
    explicit operator long() { return static_cast<long> (numerator) / denominator; }

    /*!
     * @brief Operator overload for casting the fraction into long long data type
     * @return The input fraction after casting into a long long data type
     */
    explicit operator long long() { return static_cast<long long> (numerator) / denominator; }

    /*!
     * @brief Default trivial destructor for the Fraction class
     */
    ~Fraction() = default;
};

/*!
 * @brief Operator overload function for addition of two separate fractions
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS fraction
 * @param second being the RHS fraction
 * @return Sum of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator+(const Fraction<T1> &first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first.get_numerator() * second.get_denominator()
                     + second.get_numerator() * first.get_denominator(),
                     first.get_denominator() * second.get_denominator());
    return tmp;
}

/*!
 * @brief Operator overload for addition assignment of LHS and RHS to LHS
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS fraction
 * @param second being the RHS fraction
 * @return LHS as the sum of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator+=(Fraction<T1> &first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first.get_numerator() * second.get_denominator()
                     + second.get_numerator() * first.get_denominator(),
                     first.get_denominator() * second.get_denominator());
    first = tmp;
    return first;
}

/*!
 * @brief Operator overload function for addition of fraction and constant
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS fraction
 * @param second being the RHS constant
 * @return Sum of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator+(const T1 &first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first * second.get_denominator() + second.get_numerator(),
                     second.get_denominator());
    return tmp;
}

/*!
 * @brief Operator overload for addition of constant and fraction
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS constant
 * @param second being the RHS fraction
 * @return LHS as the sum of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator+(const Fraction<T1> &first, const T1 &second) {
    Fraction<T1> tmp(second * first.get_denominator() + first.get_numerator(),
                     first.get_denominator());
    return tmp;
}

/*!
 * @brief Operator overload function for subtraction of two separate fractions
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS fraction
 * @param second being the RHS fraction
 * @return Difference of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator-(const Fraction<T1> &first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first.get_numerator() * second.get_denominator()
                     - second.get_numerator() * first.get_denominator(),
                     first.get_denominator() * second.get_denominator());
    return tmp;
}

/*!
 * @brief Operator overload for subtraction assignment of LHS and RHS to LHS
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS fraction
 * @param second being the RHS fraction
 * @return LHS as the difference of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator-=(Fraction<T1> &first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first.get_numerator() * second.get_denominator()
                     - second.get_numerator() * first.get_denominator(),
                     first.get_denominator() * second.get_denominator());
    first = tmp;
    return first;
}

/*!
 * @brief Operator overload function for subtraction of fraction and constant
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS fraction
 * @param second being the RHS constant
 * @return Difference of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator-(const T1 &first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first * second.get_denominator() - second.get_numerator(),
                     second.get_denominator());
    return tmp;
}

/*!
 * @brief Operator overload for subtraction of constant and fraction
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS constant
 * @param second being the RHS fraction
 * @return Difference of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator-(const Fraction<T1> &first, const T1 &second) {
    Fraction<T1> tmp(first.get_numerator() - second * first.get_denominator(),
                     first.get_denominator());
    return tmp;
}

/*!
 * @brief Operator overload for multiplication of two fractions
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS fraction
 * @param second being the RHS fraction
 * @return Product of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator*(const Fraction<T1> &first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first.get_numerator() * second.get_numerator(),
                     first.get_denominator() * second.get_denominator());
    return tmp;
}

/*!
 * @brief Operator overload for multiplication assignment of two fractions
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS fraction
 * @param second being the RHS fraction
 * @return LHS as the product of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator*=(Fraction<T1> &first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first.get_numerator() * second.get_numerator(),
                     first.get_denominator() * second.get_denominator());
    first = tmp;
    return first;
}

/*!
 * @brief Operator overload for multiplication of a constant and a fraction
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the constant
 * @param second being the RHS fraction
 * @return Product of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator*(T1 first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first * second.get_numerator(), second.get_denominator());
    return tmp;
}

/*!
 * @brief Operator overload for multiplication assignment of a constant and a fraction
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the constant
 * @param second being the RHS fraction
 * @return LHS as the product of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator*=(T1 first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first * second.get_numerator(), second.get_denominator());
    first = tmp;
    return first;
}

/*!
 * @brief Operator overload for multiplication of a fraction and a constant
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS fraction
 * @param first being the constant
 * @return Product of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator*(const Fraction<T1> &second, T1 first) {
    Fraction<T1> tmp(first * second.get_numerator(), second.get_denominator());
    return tmp;
}

/*!
 * @brief Operator overload for multiplication assignment of a fraction and a constant
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS fraction
 * @param first being the constant
 * @return LHS as the product of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator*=(const Fraction<T1> &second, T1 first) {
    Fraction<T1> tmp(first * second.get_numerator(), second.get_denominator());
    first = tmp;
    return first;
}

/*!
 * @brief Operator overload for division of two fractions
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS fraction
 * @param second being the RHS fraction
 * @return Division of LHS by RHS
 */
template<typename T1>
inline Fraction<T1> operator/(const Fraction<T1> &first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first.get_numerator() * second.get_denominator(),
                     first.get_denominator() * second.get_numerator());
    return tmp;
}

/*!
 * @brief Operator overload for division assignment of two fractions
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS fraction
 * @param second being the RHS fraction
 * @return LHS as division of LHS by RHS
 */
template<typename T1>
inline Fraction<T1> operator/=(Fraction<T1> &first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first.get_numerator() * second.get_denominator(),
                     first.get_denominator() * second.get_numerator());
    first = tmp;
    return first;
}

/*!
 * @brief Operator overload for division of a constant by a fraction
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS constant
 * @param second being the RHS fraction
 * @return Division of LHS by RHS
 */
template<typename T1>
inline Fraction<T1> operator/(T1 first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first * second.get_denominator(), second.get_numerator());
    return tmp;
}

/*!
 * @brief Operator overload for division assignment of a constant and a fraction
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS constant
 * @param second being the RHS fraction
 * @return LHS as the division of LHS by RHS
 */
template<typename T1>
inline Fraction<T1> operator/=(T1 first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first * second.get_denominator(), second.get_numerator());
    first = tmp;
    return first;
}

/*!
 * @brief Operator overload for division of a fraction by a constant
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS fraction
 * @param first being the RHS constant
 * @return Division of LHS by RHS
 */
template<typename T1>
inline Fraction<T1> operator/(const Fraction<T1> &second, T1 first) {
    Fraction<T1> tmp(second.get_numerator(), second.get_denominator() * first);
    return tmp;
}

/*!
 * @brief Operator overload for division assignment of a fraction by a constant
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS fraction
 * @param first being the RHS constant
 * @return LHS as the division of LHS by RHS
 */
template<typename T1>
inline Fraction<T1> operator/=(const Fraction<T1> &second, T1 first) {
    Fraction<T1> tmp(second.get_numerator(), second.get_denominator() * first);
    first = tmp;
    return first;
}

template<typename T1>
std::ostream &operator<<(std::ostream &strm, const Fraction<T1> &a) {
    if (a.get_denominator() == 1) {
        strm << a.get_numerator();
    } else {
        strm << a.get_numerator() << "/" << a.get_denominator();
    }
    return strm;
}

#endif //FRACTION_FRACTION_H
