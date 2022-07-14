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
	int i;

	for (i = 0; *dest != '\0'; i++)
	{
	}

	for (n = 0; (dest[i + n] = *src++); n++)
	{
	}
	return (dest);
}
