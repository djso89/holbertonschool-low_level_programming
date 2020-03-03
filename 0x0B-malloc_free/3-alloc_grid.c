#include "holberton.h"
#include <stdlib.h>
/**
* alloc_grid - function
* Description: a function that concatenates two strings
* @width: integer value of width
* @height: integer value of height
* Return: 2-D array of integers
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	/*checking if width and height are negative or zero*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*memory allocation in height*/
	grid = malloc(height * sizeof(int *));
	/*check if malloc on grid failed in height direction*/
	if (grid == NULL)
	{
		return (NULL);
	}
	/*memory allocation in width*/
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		/*check if malloc on grid failed in width direction*/
		if (grid[i] == NULL)
		{
			for (k = 0; k < i - 1; k++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	/*initialize every elements in grid to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
