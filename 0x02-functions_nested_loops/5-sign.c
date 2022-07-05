#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
if (n > 0)
{
n = 1;
}
else if (n == 0)
{
n = 0;
}
else
{
n = -1;
}
return (n);
}
