#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	char string[100];
	scanf("%s", string);

	int tot=0;
	for(int i=0; i<num; i++)
	{
		tot += string[i] - '0';
	}
	printf("%d", tot);
}