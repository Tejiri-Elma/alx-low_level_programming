#include "main.h"
/**
 * _putchar - test function
 * @c: _putchar
 * Return: 0
 */
int _putchar(char c);
/**
 * print_triangle - prints the pattern of a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (k = 1; k <= size; k++)
		{
			for (i = 1; i <= (size - k); i++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= k; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
