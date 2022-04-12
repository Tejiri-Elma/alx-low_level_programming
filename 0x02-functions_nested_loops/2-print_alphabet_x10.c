/*
 * Auth: Tejiri
 * a function that prints 10 times the alphabet, in lowercase
 */
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x
 * Return: 0
 */
void print_alphabet_x10(void);
{
	char i;
	int j;

	j = 0;
	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar('\n');
	}
}
