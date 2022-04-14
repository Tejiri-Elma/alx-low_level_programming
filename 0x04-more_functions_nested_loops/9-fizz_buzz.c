#include "main.h"
#include <stdio.h>
/**
 * main - this is the starting point of the code
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			print("Fizz");
		}
		else if (i % 5 == 0)
		{
			print("Buzz");
		}
		else if (i % 15 == 0)
		{
			print("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		_putchar(' ');
	}
	return (0);
}
