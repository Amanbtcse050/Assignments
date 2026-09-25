#include "stdio.h"

int main() {
    int n;
    printf("enter the size of aray\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements\n");

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int larg = arr[0];
    int slarg = -9999;
    for(int i=0;i<n;i++){
        if(larg<arr[i])
            larg = arr[i];        
    }
    for(int i=0;i<n;i++){

        if(slarg<arr[i]&&arr[i]!=larg)
            slarg = arr[i];
        
    }
    printf("%d ", larg);
    printf("%d", slarg);
}