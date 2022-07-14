#include "main.h"

/**
 * _strncat - Checks the code
 * @dest: pointer with type char
 * @src: pointer with type char
 * @n: var with type int
 *
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
		{
			j = n;
		}
	}

	return (dest);
}
