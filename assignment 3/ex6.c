#include<stdio.h>

int main() {
    int i, sum, n;

    printf("0");
    for(i=2;i;i+=3){
        
        if(sum<948) {
            sum += i;
            printf("+%d", i);
        }
        else {
            printf("total = %d", sum);
            break;
        }
    }
    return 0;
}