#include <stdio.h>
#include <unistd.h>
/**
 * main - Does not contain an arg hence 'void'
 *
 * Return: returns the value 1 int
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return(1);
}
