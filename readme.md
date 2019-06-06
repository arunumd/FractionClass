[![Build Status](https://travis-ci.org/arunumd/FractionClass.svg?branch=master)](https://travis-ci.org/arunumd/FractionClass)
[![Coverage Status](https://coveralls.io/repos/github/arunumd/FractionClass/badge.svg?branch=master)](https://coveralls.io/github/arunumd/FractionClass?branch=master)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
---
# Fraction Class - Template based Implementation in C++11/ 14 along with Google Test Unit testing

## Author
Arun Kumar Devarajulu, University of Maryland, College Park, MD

## Description
This is a Fraction Class implementation in C++ 11/14 using template programming. The Fraction Class accepts user inputs for numerator and denominator and automatically simplifies the fraction
using Euclid's GCD algorithm. The algorithm only holds for regular fractions with real numbers. The class has operator overloads for addition, subtraction, multiplication, division, equality, and 
inequality. CMake is used as build system and Google Test is used for Unit Testing. The code build coverage is done using Travis and Coveralls.

## Doxygen Documentation
In order to view the doxygen documentation for the project in a browser, please open the file named `*index.html*` found in `*/docs/html*` location

## Project Build and Run Instructions
In order to build and run the project, copy paste the below commands in a new terminal :
```
git clone https://github.com/arunumd/FractionClass.git
cd FractionClass
mkdir build
cd build
cmake.. && make
./app/fraction-app
```

## Unit testing run instructions
In order to view the succesfull evaluation of test cases, copy paste the below commands in a new terminal :
```
git clone https://github.com/arunumd/FractionClass.git
cd FractionClass
mkdir build
cd build
cmake.. && make
./test/cpp-test
```

## UML Class Diagram - Fraction Class
![Fraction Class](https://github.com/arunumd/FractionClass/blob/master/UML%20Class%20Diagram/UML_Class_Diagram_Fraction_Class.png)