/*
 * Auth - Tejiri
 * a function that checks for alphabetic character
 */
#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * Return: 0
 * @c: contains value to be compared
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
