#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - checks the code
 * @argc: input
 * @argbv: input
 * Return: Always 0
 */
int main(int argc, __attribute__((unused))char* argv)
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);

}
