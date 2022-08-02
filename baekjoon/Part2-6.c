#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hour, min, cook;
	scanf("%d %d", &hour, &min);
	scanf("%d", &cook);

	if (min + cook >= 60)
	{
		hour = hour + ((min + cook) / 60);
		min = (min + cook) % 60;
	}
	else
	{
		min = min + cook;
	}
	printf("%d %d", hour%24, min);

	return 0;
}