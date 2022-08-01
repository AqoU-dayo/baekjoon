#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d",&a);
	scanf("%d", &b);

	int num1, num10, num100;
	num100 = b / 100;
	num10 = (b % 100 - b % 10) / 10;
	num1 = b % 10;

	printf("%d\n", a * num1);
	printf("%d\n", a * num10);
	printf("%d\n", a * num100);
	printf("%d\n", a * b);

	return 0;
}
