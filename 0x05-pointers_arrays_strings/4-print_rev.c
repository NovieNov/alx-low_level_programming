#include "main.h"

/**
 * print_rev - Checks the code
 * s: the pointer
 */
void print_rev(char *s)
{
	int counter = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	for (j = (counter - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\0');
}
