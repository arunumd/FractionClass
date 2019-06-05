//
// Created by arunk on 05/30/2019.
//
#include "Fraction.h"
template<typename T1>
Fraction<T1>::Fraction(T1 num1, T1 num2) {
    if (num2 == 0) {
        std::cerr << "Denominator cannot be 0." << std::endl;
    } else if (num1 == 0) {
        numerator = 0;
        denominator = 1;
    } else {
        T1 sign = 1;
        if (num1 < 0) {
            sign = -1;
            num1 *= -1;
        }
        if (num2 < 0) {
            sign = -1;
            num2 *= -1;
        }
        T1 dummy = GCD(num1, num2);
        numerator = num1 / dummy * sign;
        denominator = num2 / dummy;
    }
}
