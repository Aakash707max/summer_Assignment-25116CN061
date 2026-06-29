#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position;

    while (true) {
        cout << "\n--- Array Operations Menu ---" << endl;
        cout << "1. Insert Element" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Search Element" << endl;
        cout << "4. Delete Element" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting system." << endl;
            break;
        }

        switch (choice) {
            case 1: // Insert
                if (size >= MAX_SIZE) {
                    cout << "Array is full!" << endl;
                } else {
                    cout << "Enter element to insert: ";
                    cin >> element;
                    arr[size] = element;
                    size++;
                    cout << "Element inserted successfully." << endl;
                }
                break;

            case 2: // Display
                if (size == 0) {
                    cout << "Array is empty." << endl;
                } else {
                    cout << "Array elements: ";
                    for (int i = 0; i < size; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3: // Search
                if (size == 0) {
                    cout << "Array is empty." << endl;
                } else {
                    cout << "Enter element to search: ";
                    cin >> element;
                    int foundIndex = -1;
                    for (int i = 0; i < size; i++) {
                        if (arr[i] == element) {
                            foundIndex = i;
                            break;
                        }
                    }
                    if (foundIndex != -1)
                        cout << "Element found at index " << foundIndex << endl;
                    else
                        cout << "Element not found!" << endl;
                }
                break;

            case 4: // Delete
                if (size == 0) {
                    cout << "Array is empty, nothing to delete." << endl;
                } else {
                    cout << "Enter element to delete: ";
                    cin >> element;
                    int delIndex = -1;
                    for (int i = 0; i < size; i++) {
                        if (arr[i] == element) {
                            delIndex = i;
                            break;
                        }
                    }
                    if (delIndex != -1) {
                        for (int i = delIndex; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        cout << "Element deleted successfully." << endl;
                    } else {
                        cout << "Element not found in array." << endl;
                    }
                }
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}