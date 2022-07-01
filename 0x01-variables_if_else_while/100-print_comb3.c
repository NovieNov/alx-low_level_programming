#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 SUCCESS
 */
int main(void)
{
	int a, b;
	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			if (a != b && a < b)
			{
				putchar('0'+ a);
				putchar('0' + b);
				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
