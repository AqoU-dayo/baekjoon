#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	for (int i = num; i >= 1; i--)
	{
		printf("%d\n", i);
	}

	return 0;
}