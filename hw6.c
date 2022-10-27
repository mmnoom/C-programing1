#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[5];
	int len = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}


	printf("Odd numbers: ");
	for (int i = 0; i < 5; i++)
	{
		if (num[i] % 2 != 0)
		{
				printf("%d ", num[i]);
		}
	}

	printf("\nEven numbers: ");
	for (int i = 0; i < 5; i++)
	{
		if (num[i] % 2 == 0)
		{
			printf("%d ", num[i]);
		}
	}
	

	return 0;
}