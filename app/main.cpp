/*!
 * @file main.cpp
 * @author Arun Kumar Devarajulu
 * @license This project is released under the MIT License.
 * @date May 28, 2019
 * @brief This file oontains the implementation of the Fraction class project
 */

#include <iostream>
#include "fraction.h"
#include "fraction.tpp"

int main() {
    std::cout << "Some simple examples are shown below. These are not exhaustive." << std::endl;
    Fraction<float> a(2, 15);
    Fraction<float> b(1, 5);
    Fraction<float> c;
    float item1 = 66;
    c = a / b;
    a = a + item1;
    b += a;
    std::cout << c << std::endl;
    std::cout << b << std::endl;
    std::cout << a << std::endl;

    return 0;
}