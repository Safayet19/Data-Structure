#include <stdio.h>

int a[4][6] = {
    {1, 3, 6, 5, 0, 0},
    {2, -10, 3, 6, 0, 0},
    {7, 10, 20, 3, 2, 2},
    {5, 7, 8, 0, 0, 0}
};

int main() {
    int row, col;

    // Print top-left to bottom-right diagonals
    for (row = 0; row < 4; row++) {
        for (int r = row, c = 0; r >= 0; c++, r--) {
            printf("%d ", a[r][c]);
        }
        printf("\n");
    }

    // Print bottom-left to top-right diagonals
    for (col = 1; col < 6; col++) {
        for (int r = 3, c = col; c < 6; c++, r--) {
            printf("%d ", a[r][c]);
        }
        printf("\n");
    }

    return 0;
}
