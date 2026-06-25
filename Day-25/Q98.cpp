#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string str1 = "microsoft";
    std::string str2 = "adobe";
    
    std::unordered_set<char> set1(str1.begin(), str1.end());
    std::unordered_set<char> common_chars;

    for (char ch : str2) {
        if (set1.count(ch)) {
            common_chars.insert(ch);
        }
    }

    std::cout << "Common characters: ";
    for (char ch : common_chars) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    return 0;
}