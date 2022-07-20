#include "main.h"

/**
 * _pow_recursion - Checks the code
 * @x: The value input
 * @y: The value input
 * Return: returns the the value sum
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
