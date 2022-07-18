#include "main.h"

/**
 * _memcpy - Checks the code
 * @dest: The pointer
 * @src: first pointer
 * @n: The byte value
 *
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
