#include <stdio.h>

// Function for iterative binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevents integer overflow

        if (arr[mid] == target)
            return mid; // Target found
        else if (arr[mid] < target)
            left = mid + 1; // Search in right half
        else
            right = mid - 1; // Search in left half
    }

    return -1; // Element not found
}

// Main function to test the binary search
int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target1 = 7;
    int target2 = 10;

    printf("Finding %d in array: Found at index %d\n", target1, binarySearch(arr, size, target1));
    printf("Finding %d in array: Found at index %d\n", target2, binarySearch(arr, size, target2));

    return 0;
}
