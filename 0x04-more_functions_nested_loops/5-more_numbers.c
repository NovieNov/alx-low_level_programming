#include "main.h"

/**
 * more_numbers - checks code
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		for (j = 0; j <= 14;)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
