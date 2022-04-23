#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @src: string
 * @dest: string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	for (len = 0; dest[len] != '\0'; len++)
	{
		continue;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
