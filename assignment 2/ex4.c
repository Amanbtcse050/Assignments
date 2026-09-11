#include<stdio.h>
#include<math.h>

int main() {
    float p1, p2, c1, c2, r;

    printf("enter the values of point cordinates \n");
    scanf("%f%f", &p1, &p2);
    printf("enter the values of centre cordinates \n");
    scanf("%f%f", &c1, &c2);
    printf("enter the radius \n");
    scanf("%f", &r);

    float d = (c1-p1)*(c1-p1) + (c2-p2)*(c2-p2);
    
    if(r*r==d)
        printf("point on the circle");
    else if(r*r>d)
        printf("point inside circle");
    else
        printf("outside circle");

    return 0;

}