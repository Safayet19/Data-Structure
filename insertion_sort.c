#include<stdio.h>

int main() {
    int arr[101], num, i, j, temp, sort, unsort;
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
//insertion sort//
    for(unsort = 2; unsort <= num; unsort++) {
        temp = arr[unsort];
        sort = unsort - 1;
        while(sort >= 1 && arr[sort] > temp) {
            arr[sort + 1] = arr[sort];
            sort--;
        }
        arr[sort + 1] = temp;
    }

    printf("\nSorted array: ");
    for(i = 1; i <= num; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
