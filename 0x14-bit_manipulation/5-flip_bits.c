#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: integer to flip
 * @m: integer to be flipped to
 * Return: flipped number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
			count++;
	}
	return (count);
}
