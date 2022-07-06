#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
*  _isalpha - entry point
* Description: function print_alphabet(void)
* @c: The character to print
* Return: Always (c) (Success)
*/
int _isalpha(int c)
{
if (isalpha(c))
{
c = 1;
}
else
{
c = 0;
}
return (c);
}
