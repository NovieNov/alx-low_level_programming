#include "main.h"

/**
 * _strlen_recursion - Checks the code
 * @s: The pointer to a string
 *
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
