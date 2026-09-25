// 5. WAP that searches a particular element entered by the user and returns its index position.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
        }
    }
    if (!found)
        printf("Element not found in the array\n");

    return 0;
}
