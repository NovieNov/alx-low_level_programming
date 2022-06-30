
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

	printf("The size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("the size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a long int: %lu.\n", (unsigned long)sizeof(ln));
	printf("The size of a long long int: %lu.\n", (unsigned long)sizeof(lln));
        printf("The size of a float: %lu.\n", (unsigned long)sizeof(f));

	return (0);	
}
