#include<stdio.h>

int main() {
    int i, j, n;
    int k = 1;


    for(i=1000;i<=1996;i+=5){
        printf("%d %d %d %d %d", i, i+1, i+2, i+3, i+4);
    
        printf("\n");
    }
    return 0;
}