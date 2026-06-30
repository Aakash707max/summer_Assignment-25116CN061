#include <iostream>
#include <cmath> // For abs()
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    long long temp = abs(num); // Handle negative numbers
    int count = 0;

    // Edge case for 0
    if (temp == 0) {
        count = 1;
    } else {
        while (temp > 0) {
            temp /= 10; // Remove the last digit
            count++;
        }
    }

    cout << "The number of digits is: " << count << endl;
    return 0;
}