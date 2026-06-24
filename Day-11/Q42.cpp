#include <iostream>
using namespace std;

// Function to find the maximum of two numbers
int findMaximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 45, num2 = 82;
    
    cout << "The maximum value between " << num1 << " and " << num2 << " is: " << findMaximum(num1, num2) << endl;
    
    return 0;
}