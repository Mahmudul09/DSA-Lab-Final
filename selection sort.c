#include <stdio.h>

int main() {
    int arr[100], i, j, n, swap, min;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (min != i) {
            swap = arr[i];
            arr[i] = arr[min];
            arr[min] = swap;
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
