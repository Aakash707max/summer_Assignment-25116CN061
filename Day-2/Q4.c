#include <stdio.h>

int main()
{
    int num, originalNum, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (originalNum == reverse)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");

    return 0;
}