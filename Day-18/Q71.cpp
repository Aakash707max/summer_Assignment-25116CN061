#include <iostream>
#include <vector>
#include <algorithm> // For sorting example array

using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoids potential overflow
        
        if (arr[mid] == target) {
            return mid; // Target found, return index
        } else if (arr[mid] < target) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }
    return -1; // Target not found
}

int main() {
    // Array must be sorted for Binary Search
    vector<int> arr = {11, 12, 22, 25, 34, 64, 90}; 
    int target = 25;
    
    int result = binarySearch(arr, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}