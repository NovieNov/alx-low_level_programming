#include "main.h"

/**
 * _memcpy - Checks the code
 * @dest: the pointer
 * @src: first pointer
 *
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src [i];
		i++;
	}
	return (dest);
}
