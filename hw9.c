#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}


int main(void)
{
	char str[256];
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = convCase(str[i]);
	}
	printf("Output>");
	fputs(str, stdout);
	return 0;
}