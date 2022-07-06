#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
*  _islower - writes the character c to stdout
* Description: function print_alphabet(void)
* Return: Always (c) (Success)
*/
int _islower(int c)
{
if (islower(c))
{
c = 1;
}
else
{
c = 0;
}
return (c);
}
