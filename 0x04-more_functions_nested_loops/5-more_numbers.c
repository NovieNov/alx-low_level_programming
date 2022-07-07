#include "main.h"

/**
 * more_numbers - checks code
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
