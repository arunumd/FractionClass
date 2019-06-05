/*!
 * @file fraction.tpp
 * @author Arun Kumar Devarajulu
 * @license This project is released under the MIT License.
 * @date May 28, 2019
 * @brief This file oontains the template class definitions for Fraction class.
 * Specifically, the definitions for constructor, copy constructor and destructor
 * can be found in this file.
 */

#include "fraction.h"

template<typename T1>
Fraction<T1>::Fraction(T1 num1, T1 num2) {
    if (num2 == 0) {
        std::cerr << "Denominator cannot be 0." << std::endl;
    } else if (num1 == 0) {
        numerator = 0;
        denominator = 1;
    } else {
        T1 sign = 1;
        if (num1 < 0 && num2 < 0) {
            num1 *= -1;
            num2 *= -1;
        } else {
            if (num1 < 0) {
                sign = -1;
                num1 *= -1;
            }
            if (num2 < 0) {
                sign = -1;
                num2 *= -1;
            }
        }
        T1 dummy = GCD(num1, num2);
        numerator = num1 / dummy * sign;
        denominator = num2 / dummy;
    }
}

template<typename T1>
Fraction<T1>::Fraction(const Fraction<T1> &f) {
    numerator = f.numerator;
    denominator = f.denominator;
    gcd = f.gcd;
}

template <typename T1>
Fraction<T1>& Fraction<T1>::operator=(Fraction other) {
    std::swap(this->numerator, other.numerator);
    std::swap(this->denominator, other.denominator);
    std::swap(this->gcd, other.gcd);
    return *this;
}
