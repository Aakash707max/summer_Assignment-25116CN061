#include <iostream>
#include <string>
#include <vector>

using namespace std;

char getMaxOccurringChar(string str) {
    vector<int> freq(256, 0);
    int maxCount = 0;
    char maxChar = ' ';
    
    for (char ch : str) {
        freq[ch]++;
        if (freq[ch] > maxCount) {
            maxCount = freq[ch];
            maxChar = ch;
        }
    }
    return maxChar;
}

int main() {
    string str;
    cout << "Enter a string: ";
    // Using getline to handle spaces if needed
    cin.ignore(); 
    getline(cin, str);
    
    if(str.empty()) {
        cout << "String is empty." << endl;
        return 0;
    }
    
    char result = getMaxOccurringChar(str);
    cout << "Maximum occurring character is: '" << result << "'" << endl;
    
    return 0;
}