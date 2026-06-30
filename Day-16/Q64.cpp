#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> removeDuplicates(const vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> uniqueArr;

    for (int num : arr) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            uniqueArr.push_back(num);
        }
    }
    return uniqueArr;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5};
    vector<int> result = removeDuplicates(arr);

    cout << "Array after removing duplicates: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}