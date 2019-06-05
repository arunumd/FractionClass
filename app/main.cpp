#include <iostream>
#include "../include/Fraction.h"
#include "../include/Fraction.tpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Fraction<float> a(2, 15);
    Fraction<float> b(1, 5);
    Fraction<float> c, d, e;
    float item1 = 66;
    c = a / b;
    a = a + item1;
    b+=a;
    std::cout << c << std::endl;
    std::cout << b << std::endl;
    std::cout << a << std::endl;

    return 0;
}