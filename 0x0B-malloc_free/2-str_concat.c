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
	else
		s1 = "";
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			continue;
		}
	}
	else
		s2 = "";

	dest = malloc(sizeof(char) * (i + j + 1));

	if (dest == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		dest[k] = s1[i];
		k++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		dest[k] = s2[j];
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
