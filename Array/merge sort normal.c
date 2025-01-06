#include <stdio.h>

int main() {
    int arr[100] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int temp[100];
    int i, mid, start = 0, end = 9, j, k;

    printf("Original array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    // Iterative Merge Sort
    for (int current_size = 1; current_size < 10; current_size = 2 * current_size) {
        for (start = 0; start < 10 - 1; start += 2 * current_size) {
            mid = start + current_size - 1;
            int right_end = start + 2 * current_size - 1;
            if (right_end > end)
                right_end = end;//

            // Merge the two halves
            int left = start;
            int right = mid + 1;
            int index = start;

            while (left <= mid && right <= right_end) {
                if (arr[left] <= arr[right])
                    temp[index++] = arr[left++];
                else
                    temp[index++] = arr[right++];
            }

            while (left <= mid)
                temp[index++] = arr[left++];

            while (right <= right_end)
                temp[index++] = arr[right++];

            // Copy the merged array back to the original array
            for (k = start; k <= right_end; k++)
                arr[k] = temp[k];
        }
    }

    printf("\nSorted array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}
