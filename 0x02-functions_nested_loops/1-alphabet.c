/*
 * Auth: Tejiri
 * a function that prints the alphabet, in lowercase
 */
#include "main.h"
/**
 * main - this is the entry point of the code
 * Return: 0
 */
void print_alphabet(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
