#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to find its frequency: ";
    cin >> target;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    cout << "Frequency of " << target << " is: " << count << endl;

    return 0;
}