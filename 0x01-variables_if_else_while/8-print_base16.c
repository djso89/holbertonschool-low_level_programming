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
char hx;

hx = '0';

while (hx <= '9')
{
putchar(hx);
hx++;
}
hx ='a';
while (hx <='f')
{
putchar(hx);
hx++;
}
putchar('\n');
return (0);
}
