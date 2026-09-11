#include<stdio.h>

int main() {
    float x, y, x1, y1;
    printf("enter the values of cordinates\n");
    scanf("%f%f%f%f", &x, &y, &x1, &y1);

    float m = (y1-y)/(x1-x);
    float c = y1 + m*x1;

    printf("equation: y = %fx+%f", m, c);

    return 0;
}