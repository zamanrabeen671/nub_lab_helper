#include <stdio.h>

int main(void)
{
	char str[100] = "Compiler Design";

	printf("String elements: ");
	for (int i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}