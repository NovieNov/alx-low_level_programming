#include "main.h"
/**
 * _islower - Check the code
 *@c: single letter input
 *
 * Return: return either 1 0r 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
