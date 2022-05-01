// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in April 2022
// This is a math program, solving the quadratic equations

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

int main() {
    // This function can solve quadratic equations.
    std::string aString;
    std::string bString;
    std::string cString;
    int aInteger;
    int bInteger;
    int cInteger;
    float delta;
    float x;
    float x1;
    float x2;

    // input
    std::cout << "A quadratic equation is like ax\u00b2+bx+c=0," <<
    " while a, b and c are constants."
    << std::endl;
    std::cout << "Enter the a of your quadratic equation: ";
    std::cin >> aString;
    std::cout << "Enter the b of your quadratic equation: ";
    std::cin >> bString;
    std::cout << "Enter the c of your quadratic equation: ";
    std::cin >> cString;

    // process
    std::cout << "" << std::endl;
    try {
        aInteger = std::stoi(aString);
        bInteger = std::stoi(bString);
        cInteger = std::stoi(cString);
        delta = pow(bInteger, 2) - 4 * aInteger * cInteger;
        std::cout << "The equation is " << aInteger << "x²"
        << "+" << bInteger << "x" << "+" << cInteger << "=0." << std::endl;
        if (delta < 0) {
            std::cout << "No real solutions for this quadratic equation!";
        } else if (delta == 0) {
            x = (-bInteger + sqrt(delta)) / 2 * aInteger;
            std::cout << "There is one solution" <<
            " for this quadratic equation. The answer is "
            << std::fixed << std::setprecision(2)
            << std::setfill('0') << x << ".";
        } else {
            x1 = (-bInteger + sqrt(delta)) / 2 * aInteger;
            x2 = (-bInteger - sqrt(delta)) / 2 * aInteger;
            std::cout << "There are two solutions"
            << " for this quadratic equation. The answers are "
            << std::fixed << std::setprecision(2)
            << std::setfill('0') << x1 << " and "
            << std::fixed << std::setprecision(2)
            << std::setfill('0') << x2 << ".";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid number!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
