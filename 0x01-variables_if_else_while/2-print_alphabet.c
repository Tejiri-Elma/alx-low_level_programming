/*
 * Auth - Tejiri
 * a program that prints the alphabet in lowercase
 */
#include <stdio.h>
/**
 * main - this is the main entry
 * Return: 0
 */
int main(void)
{
	char i;

	for(i = 'a'; i <= 'z'; i++)
	{
		putchar("%c\n", i);
	}
	return (0);
}
