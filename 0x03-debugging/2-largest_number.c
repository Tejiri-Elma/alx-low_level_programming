/*
 * Auth - Tejiri
 */
#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest of 3 numbers
 * Return: 0
 * largest number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c && b > a)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (0);
}
