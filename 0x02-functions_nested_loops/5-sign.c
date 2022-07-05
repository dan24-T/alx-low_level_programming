#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
if (n > 0)
{
putchar('+');
n = 1;
}
else if (n == 0)
{
putchar('0');
n = 0;
}
else
{
putchar('-');
n = -1;
}
return (n);
}
