#include "main.h"

/**
 * print_line - checks code
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
