#include "main.h"

/**
 * _putchar - functions as printf slightly
 * @c: the input
 * Return: Returns 0 if success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
