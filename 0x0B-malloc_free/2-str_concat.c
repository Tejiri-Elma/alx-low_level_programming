#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * The returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * and null terminated (dest)
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or dest
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0;
	char *dest;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			continue;
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			continue;
		}
	}

	dest = malloc(sizeof(char) * (i + j + 1));

	if (dest == 0)
	{
		return (NULL);
	}

	while (k < i)
	{
		dest[k] = s1[k];
		k++;
	}

	while (k < i + j)
	{
		dest[k] = s2[k - i];
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
