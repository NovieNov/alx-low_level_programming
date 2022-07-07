#include "main.h"

/**
 * more_numbers - checks code
 */
void more_numbers(void)
{
	int i = 0, j, k;

	while (i <= 9)
	{
		for (j = '0'; j <= '9';)
		{
			k = j;
			if (j == 9 && j != 15)
			{
				k = j++;
				_putchar(k);
			}
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
