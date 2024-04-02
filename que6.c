// program to print unique number in an array.
#include <stdio.h>

void printUnique(int arr[], int n) {
    printf("Unique numbers in the array: ");
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) 
                break;
        }
        if (i == j)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 3, 5, 2, 7, 5, 8, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printUnique(arr, n);

    return 0;
}
