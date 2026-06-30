#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> target;

    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break; // Stop searching once found
        }
    }

    if (foundIndex != -1) {
        cout << "Element found at index: " << foundIndex << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}