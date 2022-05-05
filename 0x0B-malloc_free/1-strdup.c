#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string
 *  which is a duplicate of the string str (dest)
 *  @str: string
 *  Return: NULL or dest
 */
char *_strdup(char *str)
{
	int i, size;
	char *dest;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}

	size = i + 1;
	dest = malloc(sizeof(char) * size);

	if (dest == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	return (dest);
}
