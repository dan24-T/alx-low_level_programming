#include <stdio.h>

/**
*main - Entry point
*
*Description: Last digits
*
*Return: zero on success
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
