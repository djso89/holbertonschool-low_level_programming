#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry Point
* Description: print a-z except q and e
* Return: Always 0 (Success)
*/
int main(void)
{
char alph = 'a';

while (alph <= 'z')
{
if (alph != 'q' && alph != 'e')
{
putchar(alph);
}
alph++;
}
putchar('\n');
return (0);
}
