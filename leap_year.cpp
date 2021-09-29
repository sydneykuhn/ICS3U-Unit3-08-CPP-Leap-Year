// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Sep 2020
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // this function is the game
    std::string userYearAsString;
    int userYear;

    // input
    std::cout << "Please enter the year : ";
    std::cin >> userYearAsString;

    // process & output
    try {
        userYear = std::stoi(userYearAsString);
        if (userYear % 4 == 0) {
            if (userYear % 100 == 0) {
                if (userYear % 400 == 0) {  
                } else {
                    std::cout << "" << userYear " is not a leap year."
                    << std::endl;
            } else {
                std::cout << "" << userYear " is a leap year."
                << std::endl;
        } else {
            std::cout << "" << userYear " is not a leap year."
            << std::endl;
        
    } catch (std::invalid_argument) {
        std::cout << "Invalid age entered, please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
