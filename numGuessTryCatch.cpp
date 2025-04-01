// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: March 31, 2025
//

#include <cmath>
// adds math library
#include <iomanip>
// adds iomanip library for rounding
#include <iostream>
// adds iostream library
#include <string>
// adds string library
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    // Makes seed random by setting it to time
    srand(time(0));

    // Variables for random number and user number
    int randNum = rand_r() % 9 + 1;
    std::string userNum;

    // Get user guess from 1 to 9
    std::cout << "Guess a number between 1 and 9: ";
    std::cin >> userNum;

    // checks if correct guess
    try {
        int userGuess = std::stoi(userNum);

        if (userGuess == randNum) {
            std::cout << "You guessed the correct number" << std::endl;
        } else {
            std::cout << "You guessed incorrect, correct number was: "
                      << randNum << std::endl;
        }
    } catch (const std::invalid_argument&) {
        std::cout << userNum << " is not an integer" << std::endl;
    }
}