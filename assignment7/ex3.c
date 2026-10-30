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
        scanf("%d", &b[i]);
    }
    int k = n>m?n:m;
    int indx = 0;
    int c[k];


    for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            if (a[i]!=b[j])
            {
                c[indx] = a[i];
                indx++;
                c[k] = b[j];
                indx++;
            }
        }
    }

    for(int i = 0;i<k;i++){
        printf("%d\n", c[i]);
    }


}
