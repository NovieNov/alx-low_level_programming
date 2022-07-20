#include "main.h"

/**
 * _puts_recursion - Checks the code
 * @s: The string pointer
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_putchar('\n');
	_puts_recursion(s + 1);
}
