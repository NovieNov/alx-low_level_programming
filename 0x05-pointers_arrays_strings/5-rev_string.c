#include "main.h"

/**
 * rev_string - Checks the code
 * @s: The pointer
 */
void rev_string(char *s)
{
	int count;
	int i;
	char j = s[0];

	count = 0;
	while (s[count] != 0)
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		count--;
		j = s[i];
		s[i] = s[count];
		s[count] = j;
	}
}
