#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Custom comparator function to compare lengths
bool compareLength(const std::string& a, const std::string& b) {
    return a.length() < b.length();
}

int main() {
    std::vector<std::string> words = {"Capgemini", "Amazon", "Deloitte", "TCS", "UI"};

    // Using stable_sort to maintain original order for equal lengths
    std::stable_sort(words.begin(), words.end(), compareLength);

    std::cout << "Words sorted by length:\n";
    for (const auto& word : words) {
        std::cout << word << " (Length: " << word.length() << ")\n";
    }

    return 0;
}