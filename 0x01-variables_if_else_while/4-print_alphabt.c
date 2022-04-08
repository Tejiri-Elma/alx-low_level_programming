/*
 * Auth: Tejiri
 */
#include <stdio.h>
/**
 * main - This is the entry point of the code
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q')
		{
			continue;
		}
		else if (i == 'e')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}

