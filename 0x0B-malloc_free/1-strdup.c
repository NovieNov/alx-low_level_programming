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
	for (i = 0; str[i] != '\0'; i++)
	{
	}

	s = malloc(i * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < i; n++)
	{
		s[n] = str[n];
	}
	return (s);
}
