#include "main.h"
#include <stddef.h>
/**
 * _strchr - Checks the code
 * @s: Pointer to a string
 * @c: variable c
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
		{
			return (s + n);
		}
	}
	return (NULL);
}
