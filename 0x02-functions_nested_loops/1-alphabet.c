#include <stdio.h>
#include "main.h"
/**
* main - Entry point
* Description: function print_alphabet(void)
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
