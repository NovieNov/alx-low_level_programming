#include "main.h"

int squareroot(int j, int i)
/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: input
 * Return: Always 0 
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); 
	}
	else
	{
		return (squareroot(n, (n + 1) / 2));
	}
}
/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: input
 * Return: if square root
 */
int squareroot(int j, int i)
{
	if (i < 1)
	{
		return (-1);
	}
	else if (i * i == j)
	{
		return (1);
	}
	else
	{
		return (squareroot(j, i - 1));
	}
}
