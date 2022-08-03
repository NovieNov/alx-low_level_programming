#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - Checks the code
 * @size: size of bytes in the array
 * @action: pointer to the function array
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;
	
	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
