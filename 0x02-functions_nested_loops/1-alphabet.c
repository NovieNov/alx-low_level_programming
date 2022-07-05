#include "main.h"

/**
 * main: Check the code
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z';)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
