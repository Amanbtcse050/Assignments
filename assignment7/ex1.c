#include<stdio.h>

int main() {

	int n1, n2 = 0, tmp;

	printf("enter the value of number");
	scanf("%d", &n1);

	while (n1 != 0) {
		tmp = n1 % 10;
		n1 = n1 / 10;
		n2 = n2 * 10 + tmp;

	}
	printf("reversed number is : %d", n2);
}