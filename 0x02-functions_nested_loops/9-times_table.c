#include <stdio.h>

void times_table(void)
{
int i, j, x;
for(i=0;i<=9;i++)
{
for(j=0;j<=9;j++)
{
x = i*j;
printf("%d, ", x);
}
putchar('\n);
}
}
