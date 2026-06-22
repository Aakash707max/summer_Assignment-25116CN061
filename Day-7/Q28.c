#include <stdio.h>
int reverse_recursive(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverse_recursive(num / 10, (rev * 10) + (num % 10));
}

int main() {
    int num = 12345;
    int reversed = reverse_recursive(num, 0);
    
    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}