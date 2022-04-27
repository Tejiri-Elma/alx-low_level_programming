#include "main.h"
/**
 * _memcpy - a function that copies n memory area from src to
 * dest memory area
 * @dest: destination string
 * @src: source string
 * @n: n bytes of memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + 1) = *(src + 1);
		i++;
	}
	return (dest);
}
