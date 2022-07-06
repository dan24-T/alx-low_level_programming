#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*print_last_digit - entry point
*@i: The character to print
*Return: value of the last digit
*/
int print_last_digit(int i)
{
int last_digit;
pld = i % 10;
if (pld < 0)
{
pld = (-1 * pld);
}
_putchar(pld + '0');
return (pld);
}
