#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements currently in the array: ";
    cin >> n;

    int arr[n];
    int actualSum = 0;
    
    cout << "Enter " << n << " elements (values from 1 to " << n + 1 << "): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        actualSum += arr[i];
    }

    // N is the total count of elements including the missing one
    int N = n + 1; 
    int expectedSum = (N * (N + 1)) / 2;

    int missingNumber = expectedSum - actualSum;

    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}