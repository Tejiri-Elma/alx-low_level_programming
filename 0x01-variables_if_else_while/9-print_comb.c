/*
 * Auth: Tejiri
 * a program that prints all possible combinations of single-digit numbers
 */
#include <stdio.h>
/**
 * main - this is the entry point of the code
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
