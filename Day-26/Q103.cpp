#include <iostream>
#include <limits>

int main() {
    double balance = 5000.00;
    int choice;
    double amount;

    do {
        std::cout << "\n===== ATM SIMULATION =====\n";
        std::cout << "1. Check Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice (1-4): ";
        
        if (!(std::cin >> choice)) {
            std::cout << "Invalid choice! Please enter a number between 1 and 4.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1:
                std::cout << "Your current balance is: $" << balance << "\n";
                break;
            case 2:
                std::cout << "Enter deposit amount: $";
                if (!(std::cin >> amount)) {
                    std::cout << "Invalid amount type!\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                } else if (amount > 0) {
                    balance += amount;
                    std::cout << "$" << amount << " deposited successfully.\n";
                } else {
                    std::cout << "Invalid deposit amount.\n";
                }
                break;
            case 3:
                std::cout << "Enter withdrawal amount: $";
                if (!(std::cin >> amount)) {
                    std::cout << "Invalid amount type!\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                } else if (amount > balance) {
                    std::cout << "Insufficient balance!\n";
                } else if (amount <= 0) {
                    std::cout << "Invalid withdrawal amount.\n";
                } else {
                    balance -= amount;
                    std::cout << "$" << amount << " withdrawn successfully.\n";
                }
                break;
            case 4:
                std::cout << "Thank you for using the ATM. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice! Please select an option between 1 and 4.\n";
        }
    } while (choice != 4);

    return 0;
}