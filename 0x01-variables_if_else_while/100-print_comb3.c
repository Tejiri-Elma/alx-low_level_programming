/*
 * Auth: Tejiri
 */
#include <stdio.h>
/**
 * main - this is the entry point of the code
 * return: 0
 */
int main(void)
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		for (j = i+1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i == 0 && j == 9);
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
