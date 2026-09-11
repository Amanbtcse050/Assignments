#include<stdio.h>

int main() {
    int k, n=1, m=0, i, o;
    printf("enter the number");
    scanf("%d", &k);
    for(i=1;i<=k;i++) {
        o = n + m;
        m = n;
        n = o; 
        printf(" %d ", m);
    }
    return 0;
}

