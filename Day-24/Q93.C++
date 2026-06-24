#include <iostream>
#include <string>

using namespace std;

bool isRotation(const string& s1, const string& s2) {
    // If lengths are not equal, they cannot be rotations
    if (s1.length() != s2.length()) return false;
    
    // Concatenate s1 with itself
    string temp = s1 + s1;
    
    // Check if s2 is a substring of temp
    return (temp.find(s2) != string::npos);
}

int main() {
    string s1 = "ABCD";
    string s2 = "CDAB";
    
    if (isRotation(s1, s2)) {
        cout << s2 << " is a rotation of " << s1 << endl;
    } else {
        cout << s2 << " is NOT a rotation of " << s1 << endl;
    }
    return 0;
}