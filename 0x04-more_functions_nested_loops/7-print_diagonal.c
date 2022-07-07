#include "main.h"

/**
 * print_diagonal - checks the code
 * @n: a single character with type int
 */
void print_diagonal(int n)
{
	int m, o;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (m = 1; m <= n; m++)
		{
			for (o = 1; o < m; o++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
