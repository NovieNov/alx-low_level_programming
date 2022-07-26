#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Checks the code
 * @str: String Input
 * Return: returns a pointer
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
	{
		return(NULL);
	}
	for (i = 0; i <= str; i++)
	{
	}

	s = malloc(i * sizeof(char));

	s[i] = str[i];
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
