#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry Point
* Description: print a-z in reverse
* Return: Always 0 (Success)
*/
int main(void)
{
char zeta;

zeta = 'z';

while (zeta >= 'a')
{
putchar(zeta);
zeta--;
}
putchar('\n');
return (0);
}
