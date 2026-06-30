#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void findPairWithSum(const vector<int>& arr, int target) {
    unordered_set<int> seen;
    bool found = false;

    for (int num : arr) {
        int complement = target - num;
        if (seen.find(complement) != seen.end()) {
            cout << "Pair found: (" << complement << ", " << num << ")" << endl;
            found = true;
            return; // Remove this return if you want to find all pairs
        }
        seen.insert(num);
    }

    if (!found) {
        cout << "No pair found with the given sum." << endl;
    }
}

int main() {
    vector<int> arr = {10, 15, 3, 7, 8};
    int target = 17;
    findPairWithSum(arr, target);
    return 0;
}