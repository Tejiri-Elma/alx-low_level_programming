/*
 * Auth: Tejiri
 * a function that checks for lowercase character
 */
#include "main.h"
/**
 * _islower - checks for lowercase characters
 * Return: 0
 * @c: contains value to be compared
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
