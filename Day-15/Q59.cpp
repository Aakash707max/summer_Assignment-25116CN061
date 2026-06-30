#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 1) {
        cout << "Array size must be greater than 1 to notice rotation." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Save the last element
    int last = arr[n - 1];

    // Shift elements to the right from back to front
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Move the last element to the front
    arr[0] = last;

    cout << "Array after right rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}