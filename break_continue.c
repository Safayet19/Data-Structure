#include <stdio.h>

int main() {
    int i, j;

    // Outer loop
    for (i = 1; i <= 5; i++) {
        // Inner loop
        for (j = 1; j <= 5; j++) {
            if (i == 3 && j == 3) {
                // Using continue to skip the current iteration
                continue;
            }
            if (i == 4 && j == 4) {
                // Using break to exit the inner loop
                break;
            }
            printf("i=%d, j=%d\n", i, j);
        }

        // Using break to exit the outer loop
        if (i == 5) {
            break;
        }
    }

    return 0;
}
