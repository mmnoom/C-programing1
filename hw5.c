#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bin(int num)
{
	if (num > 1)
	{
		bin(num / 2);
	}
	printf("%d", num % 2);
}
int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	bin(num);


	return 0;
}
