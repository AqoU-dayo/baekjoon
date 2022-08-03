#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		printf("%d\n", a + b);
	}

	return 0;
}

//https://velog.io/@jykchoi/%EB%B0%B1%EC%A4%80-29-C-10951.-AB-4