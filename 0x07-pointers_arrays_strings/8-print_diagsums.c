#include <stdio.h>
#include "holberton.h"
/**
* print_diagsums - function
* Description: a function that prints chessboard
* @a: 2-D char array
* @size: size of matrix (size x size)
* Return: nothing
*/
void print_diagsums(int *a, int size)
{
	int f_diag, s_diag;

	f_diag = 0;
	s_diag = 0;
	for (int i = 0; i < (size) * size ; i += (size + 1))
	{
		f_diag = f_diag + a[i];
	}
	for (int j = size - 1; j <= (size * size - size); j += (size - 1))
	{
		s_diag = s_diag + a[j];
	}
	printf("%d, %d\n", f_diag, s_diag);
}
