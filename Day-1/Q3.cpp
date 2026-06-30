#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial does not exist for negative numbers." << endl;
    } else {
        unsigned long long factorial = 1; // Using unsigned long long to handle larger numbers
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        cout << "The factorial of " << num << " is: " << factorial << endl;
    }

    return 0;
}