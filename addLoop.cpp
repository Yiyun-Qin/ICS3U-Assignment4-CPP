// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in April 2022
// This is a math program, adding number from 1 to n

#include <iostream>
#include <string>

int main() {
    // This function adds number from 1 to number the user enters
    std::string addString;
    int addInteger;
    int answer = 0;
    int loopCounter = 0;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> addString;

    // process
    std::cout << "" << std::endl;
    try {
        addInteger = std::stoi(addString);
        while (loopCounter <= addInteger) {
            answer = answer + loopCounter;
            loopCounter = loopCounter + 1;
        }
        std::cout << "The sum of all positive integers from 1 to "
        << addString << " is " << answer << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid number!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
