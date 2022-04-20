#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: string to be divided and printed
 */
void puts_half(char *str)
{
	int i, n, len;

	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}

	n = (len - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
