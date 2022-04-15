#include "main.h"
/**
 * print_triangle - prints the shape of a triangle
 * Return: Nothing
 * @size: values of #
 */
void print_triangle(int size)
{
	int i, j, k;  

	for(k = 1; k <= size; k++)
	{
		for(i = 1; i <= (size - k); i++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= k; j++)
		{
			_putchar(58);
		}
		_putchar('\n');
	}
	return (0);
}
