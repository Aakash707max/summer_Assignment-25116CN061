#include <iostream>
using namespace std;

bool isPerfect(int n) {
    if (n <= 1) return false;
    
    int sum = 1; 
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i != n) {
                sum = sum + i + (n / i);
            } else {
                sum = sum + i;
            }
        }
    }
    
    return sum == n;
}

int main() {
    int num = 28;
    if (isPerfect(num)) {
        cout << num << " is a Perfect number." << endl;
    } else {
        cout << num << " is NOT a Perfect number." << endl;
    }
    return 0;
}