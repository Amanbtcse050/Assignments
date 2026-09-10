#include<stdio.h>

int main() {
    int mrx;
    printf("enter the marks\n");
    scanf("%d", &mrx);
    printf("grades\n");

    if(mrx>=90)
        printf("EX");
    else if(mrx>=80)
        printf("A");
    else if(mrx>=70)
        printf("B");
    else if(mrx>=60)
        printf("C");
    else if(mrx>=50)
        printf("D");
    else if(mrx>=35)
        printf("P");
    else
        printf("fail");


    return 0;
}