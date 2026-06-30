#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {14, 45, 2, 8, 99, 32};
    
    // Sort using built-in comparator for descending order
    sort(arr.begin(), arr.end(), greater<int>());
    
    cout << "Array sorted in descending order: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}