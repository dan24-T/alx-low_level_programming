#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - entry point
* Description: function print_alphabet(void)
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int n;
char i;
for (n = 0; n < 10; n++)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
}
