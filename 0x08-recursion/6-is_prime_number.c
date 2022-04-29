#include "main.h"
/**
 * _prime - evaluates whether an integer is a prime number
 * @a: dividend
 * @b: divisor
 * Return: 1 0n success
 * on error, returns 0
 */
int _prime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	else
	{
		return (_prime(a, b + 1));
	}
}
/**
 * is_prime_number - a function that returns 1 if
 * the input integer is a prime number
 * @n: integer
 * Return: 1 on success, 0 on failure
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime(n, 2));
	}
}
