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

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
