#include<stdio.h>

int main() {
    int pwr;
    printf("enter your power consumption");
    scanf("%d", &pwr);


    switch(pwr) {
        case 0 ... 200:
            printf("amount to be paid = %f", pwr*0.5);
            break;
        case 201 ... 400:
            printf("amount to be paid = %f", 100+0.65*(pwr-200));
            break;
        case 401 ... 600:
            printf("amount to be paid = %f", 230+0.80*(pwr-400));
            break;
        default:
            printf("amount to be paid = %f", 390+(pwr-600));
    }
}