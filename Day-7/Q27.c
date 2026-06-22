#include <stdio.h>

int sumOfDigits(int n) {
    
    if (n == 0) {
        return 0;
    }
    
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number = 12345;
    int result = sumOfDigits(number);
    printf("The sum of digits of %d is: %d\n", number, result);
    return 0;
}