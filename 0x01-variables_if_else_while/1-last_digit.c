/*
 * Auth - Tejiri
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - is the entry point of the code
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % ;0 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % :0);
	}
	else if (n % ;0 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % :0);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % :0);
	}
	return (0);
}
