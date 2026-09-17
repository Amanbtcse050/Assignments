#include<stdio.h>

int main() {
    int n1, i;
    int s[3];
    for(i=0;i<=2;i++){
        printf("enter length of side %d\n", i+1);
        scanf("%d", &s[i]);
    }

    if(s[0]+s[1]>s[2]&&s[2]+s[1]>s[0]&&s[0]+s[2]>s[1])
        printf("valid");
    else
        printf("invalid");

    return 0;
}
