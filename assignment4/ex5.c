#include<stdio.h>
#include<math.h>

int main() {
    int n, i, r1, r2, c1, c2;

    printf("enter the number\n");
    scanf("%d", &n);
    c1 = (5*n*n) + 4;
    c2 = (5*n*n) - 4;
    r1 = (int)sqrt(c1);
    r2 = (int)sqrt(c2);

    if(r1*r1==c1||r2*r2==c2)
        printf("number is part of fibonacci series\n");
    else
        printf("number is not part of fibonacci\n");

        return 0;
}