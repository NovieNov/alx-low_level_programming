#include "main.h"

/**
 * _strncpy - Checks the code
 * @dest: The pointer with type char
 * @src: The pointer with type char
 *
 * Return: The dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		while (i < n)
		{
			dest[i++] = '\0';
		}
	}
	return (dest);
}
