#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c;
    printf("enter the coefficeints\n");
    scanf("%f%f%F", &a, &b, &c);
    float d = b*b-4*a*c;
    
    if(d<0) {
        float rx = -b/(2*a);
        
        float D = sqrt(-1*d);
        float ry = D/(2*a);

        printf("roots are negative\nRoot1 = %f+i%f\nRoot2 = %f-i%f", rx, ry, rx, ry);
    }
    else {
        float rx = -b/(2*a);
        
        float D = sqrt(d);
        float ry = D/(2*a);
        printf("roots are real\nRoot1 = %f+%f\nRoot2 = %f-%f", rx, ry, rx, ry);
    }

    return 0;
}