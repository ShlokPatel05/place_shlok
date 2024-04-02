// Write a program to count the number of even and odd integers in a given array of integers.

#include <stdio.h>

void countEvenOdd(int arr[], int size) {
    int evenCount = 0, oddCount = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    
    printf("Number of even integers: %d\n", evenCount);
    printf("Number of odd integers: %d\n", oddCount);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    countEvenOdd(arr, size);

    return 0;
}


