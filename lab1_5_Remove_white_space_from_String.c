#include <stdio.h>

int main(void)
{
	char str[100] = "A B C D";
	char result[100];
	int j = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			result[j++] = str[i];
		}
	}

	result[j] = '\0';
	printf("String after removing spaces: %s\n", result);
	return 0;
}