#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str1, str2;
    int choice;

    while (true) {
        cout << "\n--- String Operations Menu ---" << endl;
        cout << "1. Find Length of String" << endl;
        cout << "2. Concatenate Strings" << endl;
        cout << "3. Reverse String" << endl;
        cout << "4. Compare Two Strings" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore(); // Clears input buffer before reading strings

        if (choice == 5) {
            cout << "Exiting program." << endl;
            break;
        }

        switch (choice) {
            case 1:
                cout << "Enter a string: ";
                getline(cin, str1);
                cout << "Length of string: " << str1.length() << " characters." << endl;
                break;

            case 2:
                cout << "Enter first string: ";
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                cout << "Concatenated String: " << str1 + str2 << endl;
                break;

            case 3:
                cout << "Enter a string to reverse: ";
                getline(cin, str1);
                reverse(str1.begin(), str1.end());
                cout << "Reversed String: " << str1 << endl;
                break;

            case 4:
                cout << "Enter first string: ";
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                if (str1 == str2)
                    cout << "Both strings are completely identical." << endl;
                else
                    cout << "Strings are different." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}