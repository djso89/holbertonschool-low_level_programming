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
int f_digit;
int s_digit;

for (f_digit = 0; f_digit <= 9; f_digit++)
{
for (s_digit = f_digit + 1; s_digit <= 9; s_digit++)
{
putchar('0' + f_digit);
putchar('0' + s_digit);
if (f_digit != 8)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
}
return (0);
}
