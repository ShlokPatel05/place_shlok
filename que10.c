// 2D matrix question - Find row with maximum no. of 1’s

#include <stdio.h>

#define ROWS 4
#define COLS 4

int findMaxOnesRow(int matrix[ROWS][COLS]) {
    int maxOnesRow = -1;
    int maxOnesCount = 0;

    for (int i = 0; i < ROWS; i++) {
        int onesCount = 0;
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == 1) {
                onesCount++;
            }
        }
        if (onesCount > maxOnesCount) {
            maxOnesCount = onesCount;
            maxOnesRow = i;
        }
    }
    return maxOnesRow;
}

int main() {
    int matrix[ROWS][COLS] = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 1}
    };

    int maxOnesRow = findMaxOnesRow(matrix);

    if (maxOnesRow != -1) {
        printf("Row with maximum number of 1's: %d\n", maxOnesRow);
    } else {
        printf("No row contains 1's in the matrix.\n");
    }

    return 0;
}
