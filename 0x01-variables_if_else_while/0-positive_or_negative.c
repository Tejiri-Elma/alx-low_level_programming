/*
 * Auth: Tejiri
 * A C code to print The number, followed by
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this the entry point ofthe code
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;	
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
