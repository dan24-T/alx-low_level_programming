#include <stdio.h>

/**
*main - Entry point
*Description: Last digits
*Return: zero on success
**/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
return (0);
}
