#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

char findFirstRepeating(string str) {
    unordered_set<char> seen;
    
    for (char ch : str) {
        // If the character is already in the set, it's the first duplicate we encounter
        if (seen.find(ch) != seen.end()) {
            return ch;
        }
        seen.insert(ch);
    }
    return '\0';
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    char result = findFirstRepeating(str);
    if (result != '\0') {
        cout << "First repeating character is: " << result << endl;
    } else {
        cout << "No repeating characters found." << endl;
    }
    return 0;
}