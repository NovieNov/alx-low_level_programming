#include <stdio.h>

/**
 * main - The entry point
 *
 * Return: Always 0 SUCCESS
 */
int main(void)
{
	char c;
	char ch;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
