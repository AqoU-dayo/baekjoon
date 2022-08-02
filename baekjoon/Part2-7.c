#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, check = 0;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
	{
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b)
	{
		printf("%d", 1000 + 100 * a);
	}
	else if (a == c)
	{
		printf("%d", 1000 + 100 * a);
	}
	else if (b == c)
	{
		printf("%d", 1000 + 100 * b);
	}
	else
	{
		check = a;
		if (check < b)
		{
			check = b;
		}
		if (check < c)
		{
			check = c;
		}
		printf("%d", check * 100);
	}

	return 0;
}