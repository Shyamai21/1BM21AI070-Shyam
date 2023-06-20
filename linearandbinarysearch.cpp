#include <iostream>
using namespace std;

class SearchAlgorithm {
public:
    // Linear Search
    static int linearSearch(int arr[], int size, int target) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                return i;  // Target found, return the index
            }
        }
        return -1;  // Target not found
    }

    // Binary Search
    static int binarySearch(int arr[], int left, int right, int target) {
        if (right >= left) {
            int mid = left + (right - left) / 2;

            // If the element is present at the middle
            if (arr[mid] == target) {
                return mid;
            }

            // If the element is smaller than the middle
            if (arr[mid] > target) {
                return binarySearch(arr, left, mid - 1, target);
            }

            // If the element is greater than the middle
            return binarySearch(arr, mid + 1, right, target);
        }

        return -1;  // Target not found
    }
};

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int linearSearchIndex = SearchAlgorithm::linearSearch(arr, size, target);
    if (linearSearchIndex != -1) {
        cout << "Linear Search: Element found at index " << linearSearchIndex << endl;
    } else {
        cout << "Linear Search: Element not found" << endl;
    }

    int binarySearchIndex = SearchAlgorithm::binarySearch(arr, 0, size - 1, target);
    if (binarySearchIndex != -1) {
        cout << "Binary Search: Element found at index " << binarySearchIndex << endl;
    } else {
        cout << "Binary Search: Element not found" << endl;
    }

    return 0;
}
