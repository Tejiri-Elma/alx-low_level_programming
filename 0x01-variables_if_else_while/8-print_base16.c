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
	char j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
