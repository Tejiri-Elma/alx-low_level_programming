#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments passed
 * Return: integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	if (n == 0)
		return (0);
	va_end(args);
	return (sum);
}
