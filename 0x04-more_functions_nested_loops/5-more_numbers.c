#include "main.h"

/**
 * more_numbers - checks code
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 0; j <= 14;)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
