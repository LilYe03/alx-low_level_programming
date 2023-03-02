#include "main.h"
#include "stdio.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: The string to be encoded.
 * Return: 0.
 */

char *leet(char *str)

{
	char *result = malloc(strlen(str) + 1);
	char *orig = str;
	char *dest = result;

	while (*orig)
	{
		char c = *orig++;
		if (c == 'a' || c == 'A')
		{
			*dest++ = '4';
		}
		else if (c == 'e' || c == 'E')
		{
			*dest++ = '3';
		}
		else if (c == 'o' || c == 'O')
		{
			*dest++ = '0';
		}
		else if (c == 't' || c == 'T')
		{
			*dest++ = '7';
		}
		else if (c == 'l' || c == 'L')
		{
			*dest++ = '1';
		}
		else
		{
			*dest++ = c;
		}
	}

	*dest = '\0';

	return (result);

}
