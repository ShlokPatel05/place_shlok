// Program to remove duplicate elements from the array

#include <stdio.h>

void removeDuplicates(int arr[], int *size) {
    int newSize = 0;
    for (int i = 0; i < *size; i++) {
        int j;
        for (j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == newSize) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    *size = newSize;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    removeDuplicates(arr, &size);

    printf("Array after removing duplicates: ");
    printArray(arr, size);

    return 0;
}
