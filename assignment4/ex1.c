#include<stdio.h>

int main() {
    int n1, n2;
    
    printf("n\tn^2\tn^3\tn^4\n");

    for(int i=1;i<=10;i++){
        int o=1;
        for(int j=1;j<=4;j++){
            
            o = o*i;
            printf("%d\t", o);
            
        }

        printf("\n");
    }
    return 0;
}