#include "main.h"
/**
 *print_numbers - prints the numbers, from 0 to 9
 * Return: 0
 * @c: putchar variable
 */
int _putchar(char c);
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar((c % 10) + '0');
	}
	_putchar('\n');
}
