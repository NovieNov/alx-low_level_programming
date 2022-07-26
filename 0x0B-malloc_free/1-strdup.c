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

	s = malloc(sizeof(char) * i);

	i += 1;
	for (n = 0; n < i; n++)
	{
		s[n] = str[n];
	}
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
