// Program to rotate array elements left by 1 position

#include <stdio.h>

void rotateLeftByOne(int arr[], int size) {
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    rotateLeftByOne(arr, size);

    printf("Array after rotating left by 1 position: ");
    printArray(arr, size);

    return 0;
}
