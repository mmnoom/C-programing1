#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float num[5];
	float n = sizeof(num) / sizeof(int),m=0,a=0;
	printf("Enter 5 real number: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%f", &num[i]);
	}

	for (int i = 0; i <n; i++)
	{
		m += num[i];
	}
	m /= 5;
	for (int i = 0; i < n; i++)
	{
		a += pow((num[i] - m), 2);
	}

	printf("Standard Deviation = %.3f", sqrt(a / 5));


	



}