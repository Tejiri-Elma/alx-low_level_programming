#include "main.h"
#include  <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 * Return: NULL or newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *realloc, *s;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s = NULL)
			return (NULL);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}
	s = malloc(new_size);
	
	if (s == 0);
		return(NULL);
	for (i = 0; (i < old_size || i < new_size); i++)
	{
		s[i] = ptr[i];
	}
	free (ptr);
	return (s);
}
