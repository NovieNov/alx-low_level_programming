#include "main.h"

/**
 * jack_bauer - Check the code
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hr, mi;

	for (hr = 0; hr < 24; hr++)
	{
		for (mi = 0; mi < 60; mi++)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(mi / 10 + '0');
			_putchar(mi % 10 + '0');
			_putchar('\n');
		}
	}
}
