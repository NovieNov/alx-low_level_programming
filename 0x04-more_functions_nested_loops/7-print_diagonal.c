#include "main.h"

/**
 * print_diagonal - checks the code
 */
void print_diagonal(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (m = 1; m <= n; m++)
		{
			_putchar((' ') + '\\');
		}
		_putchar('\n');
	}
}
