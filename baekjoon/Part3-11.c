#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, x;
	scanf("%d %d", &n, &x);
	for (int i = 1; i <= n; i++)
	{
		int num;
		scanf("%d", &num);
		
		if (num < x)
		{
			printf("%d ", num);
		}
	}

	return 0;
}