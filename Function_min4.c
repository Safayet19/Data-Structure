#include <stdio.h>

int min(int a, int b) {
    if (a <= b)
        return a;
    return b;
}

int min4(int a, int b, int c, int d) {
    return min(min(min(a, b), c), d);
}

int main() {
    int n1, n2, n3, n4;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    int minimum = min4(n1, n2, n3, n4);
    printf("The minimum number is: %d", minimum);
    
    return 0;
}
