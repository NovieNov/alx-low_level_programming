#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9';)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
