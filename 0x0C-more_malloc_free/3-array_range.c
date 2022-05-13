#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: NULL or array
 */
int *array_range(int min, int max)
{
	int *s;
	unsigned int i;

	if (min > max)
		return (NULL);
	s = malloc((sizeof(int)) * (max - min + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
