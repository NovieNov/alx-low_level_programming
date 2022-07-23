#include "main.h"

/**
 * _puts - checks the code
 * @str: the pointer
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
