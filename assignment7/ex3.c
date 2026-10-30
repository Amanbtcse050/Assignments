#include<stdio.h>

int main() 
{
    int n, m;
    printf("enter size of array 1\n");
    scanf("%d", &n);
    printf("enter size of array 2\n");
    scanf("%d", &m);
    int a[n], b[m];
    printf("enter the value of array 1");
    for(int i = 0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("enter the value of array 2");
    for(int i = 0;i<m;i++){
        scanf("%d", &a[i]);
    }
}
