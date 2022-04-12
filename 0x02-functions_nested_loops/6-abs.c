/*
 * Auth - Tejiri
 * a function that computes the absolute value of an integer
 */
#include "main.h"
#include <stdio.h>
/**
 * _abs - checks the absolue value of an integer
 * Return: 0
 * @n: contains value to be compared
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
