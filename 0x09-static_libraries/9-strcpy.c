#include "main.h"

/**
 * _strcpy - a function that checks the code
 * @dest: input
 * @src: input
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
