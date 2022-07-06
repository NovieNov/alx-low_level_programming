#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check the code
 * @n: a character with type int
 *
 * Return: returns the first number of the array
 */
void print_to_98(int n)
{
	int num = 98;

	if (n <= num)
	{
		n++;
		printf("%d, ", n);
	}
	else 
	{
		n--;
	}
}
