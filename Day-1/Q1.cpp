#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter the value of N: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive integer." << endl;
    } else {
        // Using the mathematical formula: (n * (n + 1)) / 2
        long long sum = (n * (n + 1)) / 2;
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }

    return 0;
}