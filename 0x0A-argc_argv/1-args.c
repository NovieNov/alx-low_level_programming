#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 * @argc: counts the commandline argument
 * @argv: an array holdint commandline arg
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int i = 0;
	int j = 0;

	if (i >= 1)
	{	
		for (i = 1; i < argc; i++)
		{
			printf("%d\n", i);
		}
	}
	else
	{
		printf("%d\n", j);
	}
	return (0);
}
