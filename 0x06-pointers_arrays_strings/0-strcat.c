#include "main.h"

/**
 * strcat - Checks the code
 * @dest: The pointer
 * @src: The pointer
 *
 * return: returns j
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		_putchar (*dest);
		_putchar (*src);
	}
	return (0);
}
