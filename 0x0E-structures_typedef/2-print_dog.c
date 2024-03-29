#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - A function that prints struct dog
 * @d: pointer to struct dog
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: ");
	if (d->name)
		printf("%s\n", d->name);
	else
		printf("(nil)\n");
	printf("Age: ");

	printf("%f\n", d->age);
	printf("Owner: ");
	if (d->owner)
		printf("%s\n", d->owner);
	else
		printf("(nil)\n");
}
