#include "main.h"

/**
 * _myname - Checks the function
 * @argc: command line argument counter
 * @argv: command line strings
 */
int _myname(int argc, char *argv[])
{
	argc = 0;

	if (argc >= 0)
	{
		_putchar(*argv[0]);
	}
	return (0);
}
