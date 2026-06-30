#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxElement = arr[0];
    int minElement = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if(arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout << "Largest Element: " << maxElement << endl;
    cout << "Smallest Element: " << minElement << endl;

    return 0;
}