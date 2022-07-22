#include "main.h"

/**
 * _myname - Checks the function
 * @argc: command line argument counter
 * @argv: command line strings
 */
int _myname(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		_putchar(*argv[0]);
	}
	return (0);
}
