#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees the memory allocated to d
 * @d: input
 * Return: return is voided
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d);
}
