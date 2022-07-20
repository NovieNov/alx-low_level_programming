#include "main.h"

/**
 * _puts_recursion - Checks the code
 * @s: The string pointer
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		return;
	}
	_puts_recursion(s + 1);
}
