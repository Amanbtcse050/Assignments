#include<stdio.h>

int rev(int N, int D);
int main() 
{
    int n, d;
    printf("enter the number n and digit d");
    scanf("%d%d", &n, &d);
    int c = rev(n, d);
    printf("number of occudrence of %d = %d\n", d, c);
}
int rev(int N, int D)
{
    int count = 0, remainder;
    while (N != 0) {
        remainder = N % 10;          
        if(remainder==D)
            count+=1;
        N /= 10;
    }
    return count;
}