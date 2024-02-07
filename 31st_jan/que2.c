#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    // Initialize two arrays to store products from left and right sides
    int* leftProducts = (int*)malloc(numsSize * sizeof(int));
    int* rightProducts = (int*)malloc(numsSize * sizeof(int));

    // Calculate products of all elements to the left of each element
    leftProducts[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        leftProducts[i] = leftProducts[i - 1] * nums[i - 1];
    }

    // Calculate products of all elements to the right of each element
    rightProducts[numsSize - 1] = 1;
    for (int i = numsSize - 2; i >= 0; i--) {
        rightProducts[i] = rightProducts[i + 1] * nums[i + 1];
    }

    // Multiply left and right products to get final result
    for (int i = 0; i < numsSize; i++) {
        result[i] = leftProducts[i] * rightProducts[i];
    }

    // Free dynamically allocated memory
    free(leftProducts);
    free(rightProducts);

    return result;
}
