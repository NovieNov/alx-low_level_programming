#include "main.h"

/**
 * _puts_recursion - Checks the code
 * @s: The string pointer
 */
void _puts_recursion(char *s)
{
	_putchar('\n');
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
