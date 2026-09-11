#include<stdio.h>

int main() {
    int i, j, n;
    int k = 1;
    printf("enter number n\n");
    scanf("%d", &n);

    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf("%d", k);
            k += 1;
            if(k>4)
                k=0;
        }

        printf("\n");
    }
    return 0;
}