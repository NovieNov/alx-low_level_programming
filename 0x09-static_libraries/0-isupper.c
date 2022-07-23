#include "main.h"

/**
 * _isupper - Checks the code
 * @c: single special character
 *
 * Return: Always 0 (SUCCESS)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
