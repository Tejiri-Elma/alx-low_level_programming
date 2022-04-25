#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: integer variable
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar((i / 10) + '0');
	}
}
