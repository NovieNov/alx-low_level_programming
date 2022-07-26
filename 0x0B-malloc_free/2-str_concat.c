#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Checks the code and concatenates two strings
 * @s1: Input string
 * @s2: Input string
 * Return: Returns a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, n;
	char *p;

	if (s1 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (n = 0; s2[n] == '\0'; n++)
	{
	}

	s1[i + n] = s2[n];

	p = malloc(i * sizeof(char));

	p = s1;

	return (p);
}
