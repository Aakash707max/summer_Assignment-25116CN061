#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    int evenCount = 0;
    int oddCount = 0;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Total Even elements: " << evenCount << endl;
    cout << "Total Odd elements: " << oddCount << endl;

    return 0;
}