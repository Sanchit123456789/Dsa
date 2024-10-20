#include <iostream>
#include <vector>

bool isSortedAndRotated(std::vector<int>& arr) {
    int n = arr.size();
    int count = 0;

   
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
    }


    return (count == 1);
}

int main() {
    std::vector<int> arr = {3, 4, 5, 1, 2};

    if (isSortedAndRotated(arr)) {
        std::cout << "The array is sorted and rotated.\n";
    } else {
        std::cout << "The array is not sorted and rotated.\n";
    }

    return 0;
}

