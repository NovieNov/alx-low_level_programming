#include "main.h"

/**
 * print_line - checks code
 */
void print_line(int n)
{
	int m = '_';

	if (n > 0)
	{
		_putchar(m);
		_putchar('\n');
		m++;
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
