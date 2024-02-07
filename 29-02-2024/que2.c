#include <stdio.h>

int containsDuplicate(int arr[], int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return 1; // indicates duplicate found
            }
        }
    }
    return 0; // indicates no duplicate found
}

int main() {
    int arr[] = {1, 2, 3}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    int res = containsDuplicate(arr, size);
    if (res == 1) {
        printf("Array contains duplicates.\n");
    } else {
        printf("Array does not contain duplicates.\n");
    }
    return 0;
}
