#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry Point
* Description: print 0-9 with no char variable
* Return: Always 0 (Success)
*/
int main(void)
{
int num;

num = 0;

while (num <= 9)
{
putchar('0' + num);
num++;
}
putchar('\n');
return (0);
}
