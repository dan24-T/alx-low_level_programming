#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
int x;
x = 0;
if (isdigit(c))
{
x = 1;
}
return (x);
}
