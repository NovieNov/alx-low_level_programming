#include "main.h"

/**
 * _memset - checks the code
 * @s: the pointer 
 * @b: the variable
 * @n: the value of the byte
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		s++;
		j++;
	}
	return (s);
}
