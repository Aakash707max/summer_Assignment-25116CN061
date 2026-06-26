#include <iostream>
#include<limits>
int main() {
    int age;

    std::cout << "=== Voting Eligibie System ===\n";
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "You are eligible to vote! Please cast your vote responsibly.\n";
    } else if (age > 0) {
        std::cout << "You are not eligible to vote yet. You need to wait " << (18 - age) << " more year(s).\n";
    } else {
        std::cout << "Invalid age entered.\n";
    }

    return 0;
}