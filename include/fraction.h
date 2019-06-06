/*!
 * @file fraction.h
 * @author Arun Kumar Devarajulu
 * @license This project is released under the MIT License.
 * @date May 28, 2019
 * @brief This file oontains the header file declarations for the fraction class.
 * The class accepts two inputs (numerator and denominator) and automatically simplifies
 * the received inputs based on Euclid's algorithm. later the simplified numerator and
 * denominator are stored in separate variables.
 */

#ifndef FRACTION_FRACTION_H
#define FRACTION_FRACTION_H

#include <iostream>

/*!
 * @brief Fraction class which stores the numerator and denominator of an
 * input fraction inside a Fraction<T1> object after reduction of gcd from
 * both the numerator and denominator using Euclid's algorithm
 * @tparam T1 Input data type for type of number being passed to the Fraction
 * class
 */
template<typename T1>
class Fraction {
private:
    /*!
     * @brief Euclid's algorithm for calculating GCD of given fraction
     * @param num1 being the numerator
     * @param num2 being the denominator
     * @return The gcd of the given fraction
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
    /*! @brief Getter function for fetching the numerator*/
    T1 get_numerator() const { return numerator; }

    /*! @brief Getter function for fetching the denominator*/
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

    /*! @brief Simple getter function to fetch the gcd
     *  @return gcd based on Euclid's algorithm
     * */
    T1 get_gcd() { return gcd; }

    /*!
     * @brief Copy constructor for Fraction class
     * @param f being the input object to be copied
     */
    Fraction(const Fraction &f);

    /*!
     * @brief Assignment operator for assignment of an object to another object.
     * The assignment is made as move assignment using std::swap
     * @param other being the object to be assigned to
     * @return New object to which it is assigned to
     */
    Fraction &operator=(Fraction other);

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
 * @brief Operator overload function for addition of constant and fraction
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS constant
 * @param second being the RHS fraction
 * @return Sum of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator+(const T1 &first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first * second.get_denominator() + second.get_numerator(),
                     second.get_denominator());
    return tmp;
}

/*!
 * @brief Operator overload for addition of fraction and constant
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS fraction
 * @param second being the RHS constant
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
 * @brief Operator overload function for subtraction of constant and fraction
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS constant
 * @param second being the RHS fraction
 * @return Difference of LHS and RHS
 */
template<typename T1>
inline Fraction<T1> operator-(const T1 &first, const Fraction<T1> &second) {
    Fraction<T1> tmp(first * second.get_denominator() - second.get_numerator(),
                     second.get_denominator());
    return tmp;
}

/*!
 * @brief Operator overload for subtraction of fraction and constant
 * @tparam T1 Data type for input number passed as template argument
 * @param first being the LHS fraction
 * @param second being the RHS constant
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
inline Fraction<T1> operator*(const T1 first, const Fraction<T1> &second) {
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
inline Fraction<T1> operator*(const Fraction<T1> &second, const T1 first) {
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
inline Fraction<T1> operator/(const T1 first, const Fraction<T1> &second) {
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
inline Fraction<T1> operator/(const Fraction<T1> &second, const T1 first) {
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
inline Fraction<T1> operator/=(const Fraction<T1> &second, const T1 first) {
    Fraction<T1> tmp(second.get_numerator(), second.get_denominator() * first);
    first = tmp;
    return first;
}

/*!
 * @brief Operator overload for greater than test between fraction and constant
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS fraction
 * @param first being the RHS constant
 * @return true if LHS is greater than RHS
 * @return false if LHS lesser than RHS
 */
template<typename T1>
inline bool operator>(const Fraction<T1> &second, const T1 first) {
    if (second.get_denominator() == 1) {
        return (second.get_numerator() > first);
    } else {
        return (second.get_numerator() > first * second.get_denominator());
    }
}

/*!
 * @brief Operator overload for greater than test between constant and fraction
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS constant
 * @param first being the RHS fraction
 * @return true if LHS is greater than RHS
 * @return false if LHS lesser than RHS
 */
template<typename T1>
inline bool operator>(const T1 first, const Fraction<T1> &second) {
    if (second.get_denominator() == 1) {
        return (first > second.get_numerator());
    } else {
        return (first * second.get_denominator() > second.get_numerator());
    }
}

/*!
 * @brief Operator overload for greater than test between two fractions
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS fraction
 * @param first being the RHS fraction
 * @return true if LHS is greater than RHS
 * @return false if LHS lesser than RHS
 */
template<typename T1>
inline bool operator>(const Fraction<T1> &first, const Fraction<T1> &second) {
    if (first.get_denominator() == second.get_denominator()) {
        return first.get_numerator() > second.get_numerator();
    } else {
        return (first.get_numerator() * second.get_denominator()) >
               (second.get_numerator() * first.get_denominator());
    }
}

/*!
 * @brief Operator overload for lesser than test between fraction and constant
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS fraction
 * @param first being the RHS constant
 * @return true if LHS is lesser than RHS
 * @return false if LHS greater than RHS
 */
template<typename T1>
inline bool operator<(const Fraction<T1> &second, const T1 first) {
    if (second.get_denominator() == 1) {
        return (second.get_numerator() < first);
    } else {
        return (second.get_numerator() < first * second.get_denominator());
    }
}

/*!
 * @brief Operator overload for lesser than test between constant and fraction
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS constant
 * @param first being the RHS fraction
 * @return true if LHS is lesser than RHS
 * @return false if LHS greater than RHS
 */
template<typename T1>
inline bool operator<(const T1 first, const Fraction<T1> &second) {
    if (second.get_denominator() == 1) {
        return (first < second.get_numerator());
    } else {
        return (first * second.get_denominator() < second.get_numerator());
    }
}

/*!
 * @brief Operator overload for lesser than test between two fractions
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS fraction
 * @param first being the RHS fraction
 * @return true if LHS is greater than RHS
 * @return false if LHS lesser than RHS
 */
template<typename T1>
inline bool operator<(const Fraction<T1> &first, const Fraction<T1> &second) {
    if (first.get_denominator() == second.get_denominator()) {
        return first.get_numerator() < second.get_numerator();
    } else {
        return (first.get_numerator() * second.get_denominator()) <
               (second.get_numerator() * first.get_denominator());
    }
}

/*!
 * @brief Operator overload for equality test between a fraction and a constant
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS fraction
 * @param first being the RHS constant
 * @return true if LHS is equal to RHS
 * @return false if LHS is not equal to RHS
 */
template<typename T1>
inline bool operator==(const Fraction<T1> &second, const T1 first) {
    if (second.get_denominator() == 1) {
        return (second.get_numerator() == first);
    } else {
        return false;
    }
}

/*!
 * @brief Operator overload for equality test between a constant and a fraction
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS constant
 * @param first being the RHS fraction
 * @return true if LHS is equal to RHS
 * @return false if LHS is not equal to RHS
 */
template<typename T1>
inline bool operator==(const T1 first, const Fraction<T1> &second) {
    if (second.get_denominator() == 1) {
        return (first == second.get_numerator());
    } else {
        return false;
    }
}

/*!
 * @brief Operator overload for equality test between two fractions
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS fraction
 * @param first being the RHS fraction
 * @return true if LHS is equal to RHS
 * @return false if LHS is not equal to RHS
 */
template<typename T1>
inline bool operator==(const Fraction<T1> &first, const Fraction<T1> &second) {
    if (first.get_denominator() == second.get_denominator()) {
        return first.get_numerator() == second.get_numerator();
    } else {
        return false;
    }
}

/*!
 * @brief Operator overload for inequality test between a fraction and a constant
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS fraction
 * @param first being the RHS constant
 * @return true if LHS is not equal to RHS
 * @return false if LHS is equal to RHS
 */
template<typename T1>
inline bool operator!=(const Fraction<T1> &second, const T1 first) {
    if (second.get_denominator() == 1) {
        return (second.get_numerator() != first);
    } else {
        return true;
    }
}

/*!
 * @brief Operator overload for inequality test between a constant and a fraction
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS constant
 * @param first being the RHS fraction
 * @return true if LHS is not equal to RHS
 * @return false if LHS is equal to RHS
 */
template<typename T1>
inline bool operator!=(const T1 first, const Fraction<T1> &second) {
    if (second.get_denominator() == 1) {
        return (first != second.get_numerator());
    } else {
        return true;
    }
}

/*!
 * @brief Operator overload for inequality test between two fractions
 * @tparam T1 Data type for input number passed as template argument
 * @param second being the LHS fraction
 * @param first being the RHS fraction
 * @return true if LHS is not equal to RHS
 * @return false if LHS is equal to RHS
 */
template<typename T1>
inline bool operator!=(const Fraction<T1> &first, const Fraction<T1> &second) {
    if (first.get_denominator() == second.get_denominator()) {
        return first.get_numerator() != second.get_numerator();
    } else {
        return true;
    }
}

/*!
 * @brief Operator overload for printing the fraction to output stream
 * @tparam T1 Data type for input number passed as template argument
 * @param strm Output stream object
 * @param a Fraction of interest
 * @return Output stream object with the inserted fraction
 */
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
