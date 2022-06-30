#include <stdio.h>

/**
 * main - remains void
 *
 * Return: returns 0 int value
 */
int main(void)
{
	int i;
	char c;
	long int ln;
	long long int lln;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(ln));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lln));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
