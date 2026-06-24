#include <iostream>
#include <string>

using namespace std;

string compressString(const string& str) {
    string compressed = "";
    int n = str.length();
    
    for (int i = 0; i < n; i++) {
        int count = 1;
        // Count consecutive occurrences of the current character
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        compressed += str[i] + to_string(count);
    }
    
    // Return original string if compression doesn't save space
    return compressed.length() < str.length() ? compressed : str;
}

int main() {
    string text = "aabcccccaaa";
    cout << "Original: " << text << endl;
    cout << "Compressed: " << compressString(text) << endl;
    return 0;
}