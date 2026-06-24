#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    // 0 and 1 are not prime numbers
    if (n <= 1) return false;
    
    // Check divisors from 2 up to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // Found a factor, so it's not prime
    }
    return true;
}

int main() {
    int num = 29;
    
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is NOT a prime number." << endl;
    }
    
    return 0;
}