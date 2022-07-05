#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* print_alphabet - entry point
* Description: function print_alphabet(void)
* Return: Always 0 (Success)
*/
int _islower(int c)
{
if (islower(c))
{
putchar('1');
}
else
{
putchar('0');
}
return (c);
}
