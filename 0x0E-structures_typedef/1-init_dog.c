#include  <stdio.h>
#include "main.h"
/**
 * init_dog - checks the code
 * @d: The pointer holds the values of struct dog
 * @name: input
 * @age:input
 * @owner: input
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
