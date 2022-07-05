#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
if (n > 0)
{
n=1;
putchar('+');
}
else if (n == 0)
{
n=0;
putchar('0');
}
else
{
n=-1;
putchar('-');
}
return (n);
}
