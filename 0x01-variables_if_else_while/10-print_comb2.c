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
int n;

while (n <= 99)
{
/* print the first digit*/
putchar('0' + (n / 10));
putchar('0' + (n % 10));
if (n != 99)
{
putchar (',');
putchar(' ');
}
else
{
putchar('\n');
}
n++;
}
return (0);
}
