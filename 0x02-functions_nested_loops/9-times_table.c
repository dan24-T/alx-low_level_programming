#include <stdio.h>
#include "main.h"

void times_table(void)
{
int i, j, x;
for(i=0;i<=9;i++)
{
for(j=0;j<=9;j++)
{
x = i*j;
if (j<9)
{
printf("%2d, ", x);
}
else
{
printf("%2d", x);
}
}
putchar('\n');
}
}
