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

	int alphabet;
	int count;

	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		count++;
		_putchar('\n');
	}
}
