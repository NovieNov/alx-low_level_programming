#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always return 0 SUCCESS
 */
int main(void)
{
	char *c = "_putchar";

	while(*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');


	return(0);
}
