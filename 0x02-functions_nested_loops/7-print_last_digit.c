#include "main.h"

/**
 * print_last_digit - Check the code
 * @l: single special character
 *
 * Return: return the value of m
 */
int print_last_digit(int l)
{
	int m;

	m = (l % 10);
	if (m < 0)
		m = (-1 * m);
	_putchar(m + '0');

	return (m);
}
