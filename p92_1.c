#include <stdio.h>

int binarySearch(int arr[], int n, int target);

int main() {
    int n;

    // Get user input for array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Get user input for array elements (assuming the array is sorted)
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;

    // Get user input for the target value
    printf("Enter the target value: ");
    scanf("%d", &target);

    // Call binarySearch function and output the result
    if (binarySearch(arr, n, target)) {
        printf("%d is present in the array.\n", target);
    } else {
        printf("%d is not present in the array.\n", target);
    }

    return 0;
}

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return 1; // Target found
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return 0; // Target not found
}
