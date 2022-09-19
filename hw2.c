#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float ran;
	printf("Please enter kilometers: ");
	scanf("%f",&ran);
	printf("%.1f km is equal to %.1f miles.",ran,ran/1.609);
	
	return 0;
}