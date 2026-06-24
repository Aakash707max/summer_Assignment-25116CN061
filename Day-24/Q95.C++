#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string findLongestWord(const string& sentence) {
    stringstream ss(sentence);
    string word, longestWord = "";
    
    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    return longestWord;
}

int main() {
    string text = "Write a program to find the longest word in this sentence";
    cout << "Longest word: " << findLongestWord(text) << endl;
    return 0;
}