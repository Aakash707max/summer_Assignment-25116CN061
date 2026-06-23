#include <iostream>
#include <string>
#include <vector>

using namespace std;

char findFirstNonRepeating(string str) {
    vector<int> freq(256, 0); // To store counts of all ASCII characters
    
    // Count frequencies
    for (char ch : str) {
        freq[ch]++;
    }
    
    // Find the first one with a frequency of 1
    for (char ch : str) {
        if (freq[ch] == 1) {
            return ch;
        }
    }
    return '\0'; // Return null character if none found
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    char result = findFirstNonRepeating(str);
    if (result != '\0') {
        cout << "First non-repeating character is: " << result << endl;
    } else {
        cout << "All characters are repeating." << endl;
    }
    return 0;
}