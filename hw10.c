#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct cityInfo
{
	char name[20];
	char country[20];
	int popultion;
}City;
int main(void)
{
	City city[3];
	printf("Inut three cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("Name> ");
		gets(city[i].name);
		printf("Country> ");
		gets(city[i].country);
		printf("Population> ");
		scanf("%d", &city[i].popultion);
		getchar();

	}
	printf("\n Printing the three cities:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people\n",
			i+1, &city[i].name, &city[i].country, city[i].popultion);

	}

	return 0;
}


