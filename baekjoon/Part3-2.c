#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}