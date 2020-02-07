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
int i;

for (i = 0; i <=  9; i++)
{
putchar('0' + i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}
