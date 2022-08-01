#ifndef dog_H
#define dog_H

/**
 * struct dog - a new type which contains different variables and types
 * @name: input
 * @age: input
 * @owner: input
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
