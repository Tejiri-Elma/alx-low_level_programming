#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of items to be stored in the allocated memory
 * @size: number of bytes that each items takes
 * Return: NULL or the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * sizeof(unsigned int));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*(s + i) = 0;
	return (s);
}
