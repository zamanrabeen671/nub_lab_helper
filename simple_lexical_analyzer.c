#include <stdio.h>
#include <string.h>
#include <ctype.h>

static int is_keyword(const char *buffer)
{
	static const char *keywords[] = {
		"auto", "break", "case", "char", "const", "continue",
		"default", "do", "double", "else", "enum", "extern", "float",
		"for", "goto", "if", "int", "long", "register", "return",
		"short", "signed", "sizeof", "static", "struct", "switch",
		"typedef", "union", "unsigned", "void", "volatile", "while"
	};
	size_t keyword_count = sizeof(keywords) / sizeof(keywords[0]);

	for (size_t i = 0; i < keyword_count; i++)
	{
		if (strcmp(keywords[i], buffer) == 0)
		{
			return 1;
		}
	}

	return 0;
}

int main(void)
{
	const char *input = "int x = 10 + y;";
	const char operators[] = "+-*/=";
	char buffer[100];
	size_t buffer_length = 0;

	printf("Analyzing input string: %s\n\n", input);
	printf("Token\t\tType\n");
	printf("-------------------------\n");

	for (size_t i = 0; i <= strlen(input); i++)
	{
		unsigned char character = (unsigned char)input[i];

		if (isalnum(character))
		{
			if (buffer_length < sizeof(buffer) - 1)
			{
				buffer[buffer_length++] = (char)character;
			}
			continue;
		}

		if (buffer_length > 0)
		{
			buffer[buffer_length] = '\0';

			if (is_keyword(buffer))
			{
				printf("%s\t\tKeyword\n", buffer);
			}
			else if (isdigit((unsigned char)buffer[0]))
			{
				printf("%s\t\tInteger\n", buffer);
			}
			else
			{
				printf("%s\t\tIdentifier\n", buffer);
			}

			buffer_length = 0;
		}

		if (character != '\0' && strchr(operators, character) != NULL)
		{
			printf("%c\t\tOperator\n", character);
		}
		else if (character == ';')
		{
			printf(";\t\tDelimiter\n");
		}
	}

	return 0;
}