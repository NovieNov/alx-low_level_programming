#include "main.h"
#include <stdlib.h>

/**
 * _str - Checks the code
 * @str: String Input
 * Return: returns a pointer
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	for (i = 0; str[i] <= 0; i++)
	{
	}

	if (str == NULL)
	{
		return(NULL);
	}

	s = malloc(i * sizeof(char));
	
	s[i] = *str;
	if (s == NULL)
	{
		return (NULL);
	}
	free(s);
	return (s);
}
