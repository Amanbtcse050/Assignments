#include<stdio.h>

int main() {
    int a, b, c;
    printf("enter the values\n");
    scanf("%d%d%d", &a, &b, &c);

    if(a==b+c||b==a+c||c==a+b)
        printf("sum of two numbers is equal to the third");
    else
        printf("no two numbers sum is equal to the third");
    
        return 0;
}