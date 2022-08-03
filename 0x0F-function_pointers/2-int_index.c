#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - A function that that searches for an integer
 * @array: input
 * @size: size of array
 * @cmp: function pointer
 * Return: returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return(-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
