#include "main.h"
/**
 * print_triangle - prints the shape of a triangle
 * Return: Nothing
 * @size: values of #
 */
void print_triangle(int size)
{
	int i, j;

	for(i = 1; i <= size; i++)
	{
		for(j = i; j < size; j++)
		{
			printf(" ");
		}
		for(j = 1; j <= i; j++)
		{
			printf(35);
		}
		printf("\n");
	}
}
