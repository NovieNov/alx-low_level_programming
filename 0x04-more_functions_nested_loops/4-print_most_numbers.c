#include "main.h"

/**
 * print_most_numbers - checks code
 *
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9';)
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');
}
