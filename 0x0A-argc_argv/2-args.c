#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 * @argc: counter for the array
 * @argv: the holder for the cl argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
