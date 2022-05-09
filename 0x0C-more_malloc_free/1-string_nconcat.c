#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1 = 0, size2 = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = NULL;
	}
	if (s2 == NULL)
	{
		s2 = NULL;
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	if (n >= size2)
	{
		n = size2;
	}
	
	s = malloc(sizeof(char) * (size1 + n + 1));

	if (s == 0)
		return (0);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
