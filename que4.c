// Sorting first half of array in Ascending order and second half in Descending order

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortFirstHalfAscending(int arr[], int n) {
    for (int i = 0; i < n / 2 - 1; i++) {
        for (int j = i + 1; j < n / 2; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void sortSecondHalfDescending(int arr[], int n) {
    for (int i = n / 2; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {3, 1, 7, 5, 2, 6, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortFirstHalfAscending(arr, n);
    sortSecondHalfDescending(arr, n);

    printf("Array with first half in ascending and second half in descending order: \n");
    printArray(arr, n);

    return 0;
}
