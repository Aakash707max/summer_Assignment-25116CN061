#include <iostream>
#include <vector>

void mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2, std::vector<int>& merged) {
    int i = 0, j = 0;
    
    // Traverse both arrays and pick the smaller element
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }
    
    // Store remaining elements of first array
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }
    
    // Store remaining elements of second array
    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }
}

int main() {
    std::vector<int> arr1 = {1, 3, 5, 7};
    std::vector<int> arr2 = {2, 4, 6, 8, 10};
    std::vector<int> merged;

    mergeSortedArrays(arr1, arr2, merged);

    std::cout << "Merged Sorted Array: ";
    for (int num : merged) {
        std::cout << num << " ";
    }
    return 0;
}