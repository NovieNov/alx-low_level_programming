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
	int i, n, j = 0;
	char *p;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
	}
	else
	{
		for (i = 0; i <= *s1; i++)
		{
		}

		for (n = 0; n <= *s2; n++)
		{
		}

		p = malloc((i + n + 1) * sizeof(char));

		if (p == NULL)
		{
			return (NULL);
		}

		while (*s1)
		{
			p[j] = *s1;
			j++;
			s1++;
		}
		while (*s2)
		{
			p[j] = *s2;
			j++;
			s2++;
		}
	}
	return (p);
}
