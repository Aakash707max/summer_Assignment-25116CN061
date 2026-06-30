#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> intersectionOfArrays(const vector<int>& arr1, const vector<int>& arr2) {
    unordered_set<int> set1(arr1.begin(), arr1.end());
    unordered_set<int> intersectSet; // To avoid duplicate matches in intersection
    vector<int> result;
    
    for (int num : arr2) {
        if (set1.find(num) != set1.end()) {
            intersectSet.insert(num);
        }
    }
    
    return vector<int>(intersectSet.begin(), intersectSet.end());
}

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 4, 6};
    
    vector<int> result = intersectionOfArrays(arr1, arr2);
    
    cout << "Intersection of Arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}