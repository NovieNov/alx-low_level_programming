#include "main.h"
#include <stdlib.h>

/**
 * create_array - Checks the code
 * @size: input
 * @c: input
 * Return: Returns a pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *n;

	if (size == 0)
	{
		return (NULL);
	}

	n = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		n[i] = c;
	}
	return (n);
}
