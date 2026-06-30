#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void findCommonElements(const vector<int>& arr1, const vector<int>& arr2) {
    unordered_map<int, bool> elements;
    
    // Mark elements of the first array as true
    for (int num : arr1) {
        elements[num] = true;
    }
    
    cout << "Common Elements: ";
    bool found = false;
    
    // Check if elements of the second array exist in the map
    for (int num : arr2) {
        if (elements[num]) {
            cout << num << " ";
            elements[num] = false; // Set to false to prevent duplicate printing
            found = true;
        }
    }
    
    if (!found) {
        cout << "None";
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {10, 20, 30, 40, 50};
    vector<int> arr2 = {30, 40, 50, 60, 70};
    
    findCommonElements(arr1, arr2);
    return 0;
}