#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, cycle = 0, count = 1;
	scanf("%d", &num);

	int a = num / 10;
	int b = num % 10;
	cycle = 10 * b + (a + b) % 10;

	while (cycle != num)
	{
		int a = cycle / 10;
		int b = cycle % 10;
		cycle = 10 * b + (a+b)%10;
		count++;
	}
	printf("%d", count);

	return 0;
}