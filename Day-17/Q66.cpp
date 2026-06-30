#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> unionOfArrays(const vector<int>& arr1, const vector<int>& arr2) {
    unordered_set<int> uniqueElements;
    
    // Insert elements from both arrays into the set
    for (int num : arr1) uniqueElements.insert(num);
    for (int num : arr2) uniqueElements.insert(num);
    
    // Convert set back to a vector
    return vector<int>(uniqueElements.begin(), uniqueElements.end());
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {3, 4, 5, 6};
    
    vector<int> result = unionOfArrays(arr1, arr2);
    
    cout << "Union of Arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}