// 6. Find out all peak elements in the array.
// A peak element is greater than its immediate neighbours.
// Boundary elements are compared only with their single neighbour.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Peak elements: ");
    int found = 0;

    for (int i = 0; i < n; i++) {
        int isPeak = 1;

        if (i > 0 && arr[i] < arr[i - 1])
            isPeak = 0;
        if (i < n - 1 && arr[i] < arr[i + 1])
            isPeak = 0;

        if (isPeak) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found)
        printf("None");
    printf("\n");

    return 0;
}
