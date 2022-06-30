
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

	printf("The size of an char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("the size of a int: %lu byte(s)\n", (unsigned long)sizeof(i);
	printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(ln));
	printf("The size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(lln));
        printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
