#include "main.h"

/**
 * print_rev - checks the code
 * @s: the pointer
 */
void print_rev(char *s)
{
	int i, j, count = 0;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
		count++;
	}

	for (i = (count - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar ('\0');
}
