#include<stdio.h>

int main() {
    int i, r, j, nt=0;
    int k;
    printf("enter number i and r n\n");
    scanf("%d%d", &i, &r);
    printf("enter value of k");
    scanf("%d", &k);

    for(j=i;j<=r;j++){
        if(j%k==0)
            nt += 1;
        
    }
    printf("%d", nt);
    return 0;
}