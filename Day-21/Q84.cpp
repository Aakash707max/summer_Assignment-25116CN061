#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string in lowercase: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        // Check if the character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase using ASCII difference
        }
    }

    cout << "Uppercase string: " << str << endl;
    return 0;
}