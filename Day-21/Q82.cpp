#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string to reverse: ";
    getline(cin, str);

    int start = 0;
    int end = str.length() - 1;

    // Swap characters from both ends moving inward
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;
    return 0;
}