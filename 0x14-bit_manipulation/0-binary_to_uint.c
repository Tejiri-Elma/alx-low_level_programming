#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num * 2 + (b[i] - '0');
	}
	return (num);
}
