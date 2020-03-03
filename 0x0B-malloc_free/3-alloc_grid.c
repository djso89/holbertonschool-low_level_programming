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
	int i;

	/*checking if width and height are negative or zero*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*memory allocation in height*/
	grid = (int **)malloc(height * sizeof(int *));
	/*check if malloc on grid failed in height direction*/
	if (grid == NULL)
	{
		return (NULL);
	}
	/*memory allocation in width*/
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		/*check if malloc on grid failed in width direction*/
		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}
	return (grid);
}
