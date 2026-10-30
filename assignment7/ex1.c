#include<stdio.h>

int rev(int K);
int main() 
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    int r = rev(n);
    printf("Reversed number = %d\n", r);
}
int rev(int K)
{
    int reversed = 0, remainder;
    while (K != 0) {
        remainder = K % 10;          
        reversed = reversed * 10 + remainder;
        K /= 10;
    }
    return reversed;
}