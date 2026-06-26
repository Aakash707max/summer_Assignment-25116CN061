#include <iostream>
#include <cstdlib>
#include <ctime>
#include<limits>

int main() {
    // Seed the random number generator
    std::srand(std::time(0));
    int secretNumber = std::rand() % 100 + 1; // Number between 1 and 100
    int guess = 0;
    int attempts = 0;

    std::cout << "=== Welcome to the Number Guessing Game ===\n";
    std::cout << "I have chosen a number between 1 and 100. Try to guess it!\n\n";

    while (guess != secretNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "\nCongratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    }

    return 0;
}