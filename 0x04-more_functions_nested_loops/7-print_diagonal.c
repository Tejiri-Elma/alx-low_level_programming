#include "main.h"
/**
 * _putchar - test
 * @c: variable
 * Return: 0
 */
int _putchar(char c);
/**
 * print_diagonal - draws a diagonal line on the terminal
 * Return: Nothing
 * @n: variable that draws the diagonal
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
