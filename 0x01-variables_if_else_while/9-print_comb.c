#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
int n = 57;
for (i = 48; i < 57 ; i++)
{
putchar(i);
if ( i < '9' )
{  
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
