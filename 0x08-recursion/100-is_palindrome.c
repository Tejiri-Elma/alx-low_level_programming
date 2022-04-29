#include "main.h"
/**
 * _strlength_recursion - find the length of a string
 * @s: string
 * @length: length of the string
 * Return: string length
 */
int _strlength_recursion(char *s, int length)
{
	if (*s == 0)
	{
		return (length - 1);
	}
	else
	{
		return (_strlength_recursion(s + 1, length + 1));
	}
}
/**
 * _palindrome - checks the first, last and middle characters
 * if they are the same
 * @a: string
 * @length: length of a string
 * Return: 1 on success and 0 on failure
 */
int _palindrome( char *a, int length)
{
	if (*a != *(a + length))
	{
		return (0);
	}
	else if (*a == 0)
	{
		return (1);
	}
	else
	{
		return (_palindrome(a + 1, length - 2));
	}
}
/**
 * is_palindrome - checks if a string is s palindrome
 * @s: string
 * Return: 0 on success and 1 on failure
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlength_recursion(s, 0);

	return (_palindrome(s, length));
}
