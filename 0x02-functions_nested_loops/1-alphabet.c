/*
 * Auth: Tejiri
 * a function that prints the alphabet, in lowercase
 */
#include "main.h"
/**
 * main - this is the entry point of the code
 * Return: 0
 */
void print_alphabet(void);
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
