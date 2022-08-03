#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char alpha[100] = {0};
	scanf("%s", alpha);

	for (int i = 97; i <= 122; i++)
	{
		for (int j = 0; j < strlen(alpha); j++)
		{
			if (alpha[i] == (char)i)
			{
				printf("%d ", i);
				break;
			}
			else if (alpha[i] == 0)
			{
				printf("%d", -1);
				break;
			}

		}
	}
	return 0;
}