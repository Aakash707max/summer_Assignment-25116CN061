#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> names = {"Paytm", "Amazon", "Adobe", "Microsoft", "Deloitte"};

    // Sorting in alphabetical order
    std::sort(names.begin(), names.end());

    std::cout << "Names sorted alphabetically:\n";
    for (const auto& name : names) {
        std::cout << name << "\n";
    }

    return 0;
}