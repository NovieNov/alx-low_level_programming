#include "main.h"

/**
 * print_rev - checks the code
 * @s: the pointer
 */
void print_rev(char *s)
{
	while (*s - 1)
	{
		s++;
	}
	_putchar ('\0');
}
