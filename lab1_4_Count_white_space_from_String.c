#include <stdio.h>

int main(void)
{
	char str[100] = "C programming language tools";
	int spaces = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			spaces++;
		}
	}

	printf("Total white spaces = %d\n", spaces);
	return 0;
}