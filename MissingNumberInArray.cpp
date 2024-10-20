#include <iostream>
#include <vector>

int findMissingNumber(std::vector<int>& arr, int n) {
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;

    for (int num : arr) {
        arraySum += num;
    }

    return totalSum - arraySum;
}

int main() {
    std::vector<int> arr = {1, 2, 4, 5, 6};
    int n = 6;

    int missingNumber = findMissingNumber(arr, n);
    std::cout << "The missing number is: " << missingNumber << "\n";

    return 0;
}
