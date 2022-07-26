#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Checks the code
 * @str: String Input
 * Return: returns a pointer
 */
char *_strdup(char *str)
{
	int i, n;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= *str; i++)
	{
	}

	s = malloc(i * sizeof(char));

	for (n = 0; n < i; n++)
	{
		s[n] = str[n];
	}
	free(s);
	return (s);
}
