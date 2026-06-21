#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int length = 0;
    // Loop until the null terminator or end of string character
    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of the string is: " << length << endl;
    return 0;
}