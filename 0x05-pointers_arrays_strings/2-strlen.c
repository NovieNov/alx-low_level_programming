#include "main.h"

/**
 * _strlen - checks the code
 * @s: the pointer
 */
int _strlen(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		i++;
		_putchar(i);
	}
	return(0);
}
