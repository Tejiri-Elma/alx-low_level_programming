#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: string to be reversed
 * @n: number of elements of an array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
