#include <iostream>
#include <vector>
#include <limits.h>

int main() {
    int n;


    std::cout << "Enter the size of the array: ";
    std::cin >> n;

   
    if (n < 1) {
        std::cout << "Array size should be at least 1." << std::endl;
        return 0;
    }

    std::vector<int> arr(n);

   
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

  
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

   
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

  
    if (secondLargest == INT_MIN) {
        std::cout << "The second largest element does not exist." << std::endl;
        std::cout << -1 << std::endl;
    } else {
        std::cout << "The second largest element is: " << secondLargest << std::endl;
    }

    return 0;
}

