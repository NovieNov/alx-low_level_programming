#include "main.h"

/**
 * more_numbers - checks code
 */
void more_numbers(void)
{
	int i, j;

	for (i = '0'; i <= '9';)
	{
		for (j = 0; j <= 14;)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
