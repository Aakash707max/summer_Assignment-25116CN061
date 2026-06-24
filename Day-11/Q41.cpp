#include <iostream>
using namespace std;

// Function to calculate the sum
int findSum(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 15, num2 = 25;
    
    cout << "The sum of " << num1 << " and " << num2 << " is: " << findSum(num1, num2) << endl;
    
    return 0;
}