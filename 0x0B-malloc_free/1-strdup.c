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

	for (i = 0; i <= *str; i++)
	{
	}
	if (str == NULL)
	{
		return(NULL);
	}

	s = malloc(i * sizeof(char));

	s[i] = str[i];
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
