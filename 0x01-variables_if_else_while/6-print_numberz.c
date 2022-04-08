/*
 * Auth: Tejiri
 */
#include <stdio.h>
/**
 * main - this is the entry point of the code
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i % 10);
	}
	putchar('\n');
	return (0);
}
