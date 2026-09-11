#include<stdio.h>

int main() {
    float x1, y1, x2, x3, y2, y3;

    printf("enter the values of cordinates 1 \n");
    scanf("%f%f", &x1, &y1);
    printf("enter the values of cordinates 2 \n");
    scanf("%f%f", &x2, &y2);
    printf("enter the values of cordinates 3 \n");
    scanf("%f%f", &x3, &y3);

    float s1 = (y2-y1)/(x2-x1);
    float s2 = (y3-y2)/(x3-x2);
    float s3 = (y3-y1)/(x3-x1);

    if(s1==s2||s2==s3||s3==s1)
        printf("\npoints are collinear");
    else
        printf("points are not collinear");


    return 0;
}