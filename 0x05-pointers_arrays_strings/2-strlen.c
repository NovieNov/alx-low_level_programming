#include "main.h"

/**
 * _strlen - checks the code
 * @s: the pointer
 *
 * Return: returns the counter
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}
