#include "main.h"
/**
 * print_triangle - prints the shape of a triangle
 * Return: Nothing
 * @size: values of #
 */
void print_triangle(int size)
{
	int i, j;  

	for(i = size; i > 0; i--)
	{
		for(j = 0; j <= size; j++)
		{
			if (j >= i)
			{
				_putchar(35);
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	return (0);
}
