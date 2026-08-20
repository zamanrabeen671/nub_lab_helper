#include <stdio.h>

int main(void)
{
	char str[100] = "Welcome to compiler design lab";
	int words = 0;
	int in_word = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			words++;
			in_word = 1;
		}
	}

	printf("Total number of words = %d\n", words);
	return 0;
}