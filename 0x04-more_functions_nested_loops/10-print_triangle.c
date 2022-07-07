#include "main.h"

/**
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		i = 1;
		while (i <= size)
		{
			for (j = 2; j <= size; j++)
			{
				_putchar('#');
			}
			i--;
			_putchar('#');
			_putchar('\n');
		}
	}
}
