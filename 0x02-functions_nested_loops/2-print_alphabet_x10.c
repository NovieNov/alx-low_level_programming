#include "main.h"

/**
 * print_alphabet_x10 - Check the code
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z';)
		{
			_putchar(j);
			j++;
		}
	i++;
	_putchar('\n');
	}
}
