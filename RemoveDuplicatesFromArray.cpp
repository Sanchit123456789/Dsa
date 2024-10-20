#include <iostream>
#include <vector>
#include <set>

std::vector<int> removeDuplicates(std::vector<int>& arr) {
    std::set<int> uniqueElements;
    for (int num : arr) {
        uniqueElements.insert(num);
    }

    return std::vector<int>(uniqueElements.begin(), uniqueElements.end());
}

int main() {
    std::vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    std::vector<int> result = removeDuplicates(arr);

    std::cout << "Array after removing duplicates: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}

