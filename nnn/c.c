#include<stdio.h>

int main()
{
    int m, n;
    printf("Enter the value of m");
    scanf("%d", &m);
    printf("Enter the value of n");
    scanf("%d", &n);
    int A[m][m], B[n][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("enter value of A%d%d\n", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter value of B%d%d\n", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    int k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                k = B[i][j];
                B[i][j] = A[i][j];
                A[i][j] = k;

            }
        }
    }




//--------------------------------------//
    printf("matric A\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d  ", A[i][j]);
            
        }

        printf("\n");
    }
    printf("matrix B\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d  ", B[i][j]);
            
        }

        printf("\n");
    }
    return 0;
}