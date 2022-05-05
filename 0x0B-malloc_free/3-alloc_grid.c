#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: width of the 2-dimensional array
 * @height: height of the 2 dimensional array
 * Return: NULL or array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height); /*malloc*/

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		
		grid[i] = malloc(sizeof(int) * width);
		
		if (grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	return (grid);
}
