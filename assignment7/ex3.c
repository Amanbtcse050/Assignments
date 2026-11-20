#include <stdio.h>

int main(){
    int m, n;
    printf("enter the value of m");
    scanf("%d", &m);
    printf("enter the value of n");
    scanf("%d", &n);
    int arr[m], arr1[n];
    printf("enter the values of array 1");
    for(int i=0; i<m; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter the values of array 2");
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    int count = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i] == arr1[j]){
                count += 1;
            }
        }
    }
    int u = m + n - count;
    printf("the union of the two arrays is %d", u);
    return 0;
}