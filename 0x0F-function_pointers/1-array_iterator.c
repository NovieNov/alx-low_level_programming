#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Checks the code
 * @size: size of bytes in the array
 * @action: pointer to the function array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;
	
	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
