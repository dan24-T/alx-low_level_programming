#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
*  _islower - entry point
* Description: function print_alphabet(void)
* Return: Always c (Success)
*/
int _islower(int c)
{
if (islower(c))
{
c=1;
}
else
{
c=0;
}
return (c);
}
