/*
 * Auth - Tejiri
 */
#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * _putchar - test function
 * @c: putchar
 * Return: 0
 */
int _putchar(char c);
void more_numbers(void)
{
	int c, i;

	i = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
