
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int revarr[n];
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed array: ");
    for (int i = n - 1; i >= 0; i--){
        revarr[n-1-i] = arr[i];
    }
    
    for (int i = 0; i < n; i++)
        printf("%d ", revarr[i]);
        
    printf("\n");

    return 0;
}
