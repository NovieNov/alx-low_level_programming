#include "main.h"

/**
 * puts2 - checks the code
 * @str: pointer
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		_putchar('\0');
	}
}
