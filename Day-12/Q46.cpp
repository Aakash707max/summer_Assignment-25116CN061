#include <iostream>
#include<climits>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int n) {
    if (n < 0) return false; // Negative numbers are not palindromes
    
    int original = n;
    int reversed = 0;
    
    while (n > 0) {
        int remainder = n % 10;
        
        // Check for potential integer overflow before multiplying
        if (reversed > (INT_MAX - remainder) / 10) return false; 
        
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    return original == reversed;
}

int main() {
    int num = 121;
    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is NOT a palindrome." << endl;
    }
    return 0;
}