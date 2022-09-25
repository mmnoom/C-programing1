#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int floor = 5;
	for (int i = 0; i < 5; i++)
	{
		for (int k = floor-1; k-i >0; k--)
		{
			printf(" ");
		}
		for (int j = 0; j<i*2+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}