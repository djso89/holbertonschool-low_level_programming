#include "holberton.h"
#include <stdio.h>

int main()
{
  int total;

  total = _printf("Con%ctance %s\n", 's', "Millecan");
  printf("_printf returned %d\n", total);

  return (0);
}
