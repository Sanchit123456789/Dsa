#include <iostream>
#include <vector>
#include <climits>

int findLargestElement(std::vector<int>& arr) {
    int largest = INT_MIN;
    for (int num : arr) {
        if (num > largest) {
            largest = num;
        }
    }
    return largest;
}

int main() {
    std::vector<int> arr = {10, 20, 4, 45, 99};
    int largest = findLargestElement(arr);
    std::cout << "The largest element in the array is: " << largest << "\n";
    return 0;
}

