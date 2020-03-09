#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Description: a program that prints the name of the file it was compiled from
 * Return: 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
}
