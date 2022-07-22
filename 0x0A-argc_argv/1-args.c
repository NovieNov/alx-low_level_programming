#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 * @argc: counts the commandline argument
 * @argv: an array holdint commandline arg
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
