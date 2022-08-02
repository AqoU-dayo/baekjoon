#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hour, min;
	scanf("%d", &hour);
	scanf("%d", &min);

	if (min >= 45)
	{
		min -= 45;
		printf("%d %d", hour, min);
	}
	else
	{

		if (hour == 0)
		{
			hour = 23;
		}
		else
		{
			hour -= 1;
		}

		min = (60 + min) - 45;

		printf("%d %d", hour, min);
	}

	return 0;
}