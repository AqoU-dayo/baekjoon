#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hansu();

int main(void)
{
	int num;
	scanf("%d", &num);

	hansu(num);

	return 0;
}

void hansu(int num)
{
	int count = 0;
	for (int i = 1; i <= num; i++)
	{
		if (i < 100)
		{
			count++;
		}
		else
		{
			int num1 = i / 100;
			int num2 = (i / 10) % 10;
			int num3 = i % 10;

			if ((num2 - num1) == (num3 - num2))
			{
				count++;
			}
		}
	}
	printf("%d", count);
}