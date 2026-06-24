#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string removeDuplicates(const string& str) {
    unordered_set<char> seen;
    string result = "";
    
    for (char ch : str) {
        // If the character is not in the set, add it to result and set
        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result += ch;
        }
    }
    return result;
}

int main() {
    string text = "programming";
    cout << "Original: " << text << endl;
    cout << "After removing duplicates: " << removeDuplicates(text) << endl;
    return 0;
}