#include <stdio.h>

int main() {
    int arr[100] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int temp[100];
    int start = 0, end = 9, num, last, left, right, j, i, mid, k;

    printf("Original array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    for (num = 1; num <= 10; num = 2 * num) { //dividing//
        for (start = 0; start <= 9; start = start + 2 * num) {
            mid = start + (num - 1);
            last = start + 2 * num - 1;
            if (last > end)
                last = end; //doesn't exceed total elements//

            left = start;
            right = mid + 1;
            k = start; //for temp array//
            while (left <= mid && right <= last) {
                if (arr[left] <= arr[right])
                    temp[k++] = arr[left++];
                else
                    temp[k++] = arr[right++];
            }
            while (left <= mid)
                temp[k++] = arr[left++];
            while (right <= last)
                temp[k++] = arr[right++];

            for (k = start; k <= last; k++)
                arr[k] = temp[k];
        }
    }
    printf("\nSorted array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}
