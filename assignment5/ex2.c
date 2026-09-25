#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Duplicate elements: ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        int isDupWithEarlier = 0;

        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                isDupWithEarlier = 1;
                break;
            }
        }
        if (isDupWithEarlier)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if (!found)
        printf("None");
    printf("\n");

    return 0;
}
