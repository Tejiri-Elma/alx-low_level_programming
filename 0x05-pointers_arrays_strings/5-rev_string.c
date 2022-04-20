#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j, len;
	char temp, temp2;

	for (len = 0; s[len] != '\0'; len++)
	{
		continue;
	}

	j = len - 1;
	i = 0;

	while (i < j)
	{
		temp = s[i];
		temp2 = s[j];
		s[i] = temp2;
		s[j] = temp;
		i++;
		j--;
	}
}
