#include "main.h"

/**
 * print_triangle - checks code
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		i = 0;
		while (i <= (size - 1))
		{
			for (j = 0; j <= (size - 1) - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			i++;
			_putchar('\n');
		}
	}
}
