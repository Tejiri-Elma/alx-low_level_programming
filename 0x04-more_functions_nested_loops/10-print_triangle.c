#include "main.h"
/**
 * print_triangle - prints the shape of a triangle
 * Return: Nothing
 * @size: values of ##
 */
void print_triangle(int size)
{
	int i, d, z, p;

	if (size > 0)
	{
		d = size - 1;
		for (i = 0; i < size ; i++)
		{
			for (z = d; z > 0 ; z--)
			{
				_putchar (' ');
			}
			for (p = 0; p <= i; p++)
			{
				_putchar (35);
			}
			d--;
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
