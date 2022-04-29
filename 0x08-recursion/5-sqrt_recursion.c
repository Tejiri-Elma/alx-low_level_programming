#include "main.h"
/**
 * _sqrt - evaluates natural square root of a number
 * @a: integer to be squared
 * @b: square root of a number
 * Return: a on success
 * On error, return -1
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(a, b + 1));
	}
}
/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n: integer
 * Return: square root of n on success
 * On error, return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return(-1);
	}
	return (_sqrt(n, 1));
}
