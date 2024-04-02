// Write a program to find a missing number in an array.

#include <stdio.h>

int findMissingNumber(int arr[], int size) {
    int expectedSum = (size + 1) * (size + 2) / 2; // Sum of first (size + 1) natural numbers
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissingNumber(arr, size);

    printf("The missing number in the array is: %d\n", missingNumber);

    return 0;
}
