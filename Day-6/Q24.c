#include <stdio.h>

double power(double x, int n) {
    double result = 1.0;
    long long absN = n < 0 ? -(long long)n : n; 
    for (long long i = 0; i < absN; i++) {
        result *= x;
    }

    if (n < 0) {
        return 1.0 / result;
    }
    return result;
}

int main() {
    double x;
    int n;
    printf("Enter base (x) and exponent (n): ");
    scanf("%lf %d", &x, &n);
    printf("%.2lf raised to the power %d is: %.4lf\n", x, n, power(x, n));
    return 0;
}