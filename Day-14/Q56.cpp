#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    bool visited[n] = {false}; // Keeps track of elements we've already counted

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements in the array: ";
    bool codeHasDuplicate = false;

    for (int i = 0; i < n; i++) {
        if (visited[i] == true) {
            continue;
        }

        bool isDuplicate = false;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                visited[j] = true; // Mark it so we don't print it again
            }
        }

        if (isDuplicate) {
            cout << arr[i] << " ";
            codeHasDuplicate = true;
        }
    }

    if (!codeHasDuplicate) {
        cout << "None";
    }
    cout << endl;

    return 0;
}