#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - function
* Description: a function that frees 2-D array
* @grid: 2-D integer pointer
* @height: number of rows
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
