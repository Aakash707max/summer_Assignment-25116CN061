#include <iostream>
using namespace std;

// Function to calculate factorial using an iterative loop
// Using 'long long' to handle larger results safely
long long findFactorial(int n) {
    if (n < 0) return -1; // Error value for negative inputs
    
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num = 5;
    
    cout << "Factorial of " << num << " is: " << findFactorial(num) << endl;
    
    return 0;
}