// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This takes a number
//  and prints which its multiplication table

#include <iostream>
#include <string>

int main() {
    // variable declaration
    std::string number_as_string;
    int number_as_integer;
    int calculation;

    // input
    std::cout << "Please enter a positive number: ";
    std::cin >> number_as_string;

    // skips line
    std::cout << "" << std::endl;

    // process & output
    try {
        number_as_integer = std::stoi(number_as_string);

        for (int variable = 0; variable <= 10; variable++) {
            calculation = number_as_integer * variable;
            std::cout << (calculation) << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "Invalid Input" << std::endl;
    }
}
