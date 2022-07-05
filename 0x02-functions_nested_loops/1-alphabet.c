#include "main.h"

/**
 * print_alphabet - A custom function, replaces main
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
