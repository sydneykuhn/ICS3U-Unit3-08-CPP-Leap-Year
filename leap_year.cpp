// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Sep 2020
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // this function is the game
    std::string userAgeAsString;
    int userAge;

    // input
    std::cout << "Please enter your age : ";
    std::cin >> userAgeAsString;

    // process & output
    try {
        userAge = std::stoi(userAgeAsString);
        if (userAge >= 25 && userAge <= 39) {
            std::cout << "You are of a reasonable age to date my grandchild."
            << std::endl;
        } else {
            std::cout << "You are not the right age to date my grandchild."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid age entered, please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
