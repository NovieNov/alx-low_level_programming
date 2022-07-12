#include "main.h"

/**
 * print_rev - checks the code
 * @s: the pointer
 */
void print_rev(char *s)
{
	while (*s - 1)
	{
		_putchar(*s);
		s--;
	}
	_putchar ('\0');
}
