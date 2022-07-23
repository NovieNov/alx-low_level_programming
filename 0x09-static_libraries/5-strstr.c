#include "main.h"
#include <stddef.h>

/**
 * _strstr - checks the code
 * @haystack: the input
 * @needle: output
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *one, *two;

	while (*haystack != '\0')
	{
		haystack++;
		*one = haystack;
		*two = needle;

		while (*one == *two && *two != '\0')
		{
			*one++;
			*two++;
		}

		if (*two == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
