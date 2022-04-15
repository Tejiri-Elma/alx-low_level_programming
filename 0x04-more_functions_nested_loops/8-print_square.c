#include "main.h"
/**
 * _putchar - test
 * Return: 0
 * @c: putchar
 */
int _putchar(char c);
/**
 * print_square - print square pattern of #
 * @size: size of the square pattern
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
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
