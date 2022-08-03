#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num,tot=0;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		tot += i;
	}
	printf("%d", tot);
	return 0;
}