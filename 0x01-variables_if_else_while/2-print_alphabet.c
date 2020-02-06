#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry Point 
* Description: print a to z
* Return: Always 0 (Success)
*/
int main(void)
{
char alph = 'a';

while (alph <= 'z')
{
putchar(alph);
alph++;
}
putchar('\n');
return (0);
}
