#include "main.h"

/**
 * strcat - Checks the code
 * @dest: The pointer
 * @src: The pointer
 *
 * return: returns 0
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0';)
	{
		_putchar (*dest);
		i++;
	}
	while (src)
	{
		_putchar (*src);
		src++;
	}

	return (0);
}
