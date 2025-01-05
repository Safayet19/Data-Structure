#include<stdio.h>

int main() {
    int arr[100], num, i, j, min, temp;
    printf("Enter total numbers: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nInputted array: ");
    for(i = 1; i <= num; i++) {
        printf("%d ", arr[i]);
    }
//selection sort//
    for(i = 1; i <= num - 1; i++)
        {
        min = i;
        for(j = i + 1; j <= num; j++)
        {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    printf("\nSorted array: ");
    for(i = 1; i <= num; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
