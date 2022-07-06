#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*print_last_digit - entry point
*@i: The character to print
*Return: Always (x) (Success)
*/
int print_last_digit(int i)
{
int last_digit, x;
last_digit = i % 10;
x = abs(last_digit);
printf("%d",x);
return x;
}
