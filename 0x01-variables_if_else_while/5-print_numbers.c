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
char num;

num = '0';

while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
