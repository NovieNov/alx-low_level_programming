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
	n = 0;

	while (s && n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
