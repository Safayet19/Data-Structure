#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            // Skip even values of i using continue
            continue;
        }

        printf("i=%d\n", i);

        for (j = 1; j <= 5; j++) {
            if (j % 2 == 0) {
                // Skip even values of j using continue
                continue;
            }

            if (i == 3 && j == 3) {
                // Use break to exit both loops when i=3 and j=3
                printf("Breaking both loops at i=3, j=3\n");
                break;
            }

            printf("  j=%d\n", j);
        }
    }

    return 0;
}
