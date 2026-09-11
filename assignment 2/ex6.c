#include <stdio.h>

int main() {
    int mrx;

    printf("Enter the marks: ");
    scanf("%d", &mrx);

    printf("Grade: ");

    if (mrx < 0 || mrx > 100)
        printf("Invalid marks");
    else if (mrx >= 90)
        printf("EX");
    else if (mrx >= 80)
        printf("A");
    else if (mrx >= 70)
        printf("B");
    else if (mrx >= 60)
        printf("C");
    else if (mrx >= 50)
        printf("D");
    else if (mrx >= 35)
        printf("P");
    else
        printf("Fail");

    return 0;
}
