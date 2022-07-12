#include "main.h"

/**
 * rev_string - Checks the code
 * @s: The pointer
 */
void rev_string(char *s)
{
	int i, j, count = 0;

	j = 0;
	while (s[j] != 0)
	{
		j++;
		count++;
	}

	for (i = (count -1); i >= 0;)
	{
		i++;
	}
}
