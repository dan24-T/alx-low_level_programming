#include <stdio.h>
#include "main.h"
/**
*  times_table - entry point
* Description: function void times_table(void);
* Return: Always (0) (Success)
*/
void times_table(void)
{
int i, j, x;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
x = i * j;
if (j < 9)
{
if (j == 0)
{
printf("%d, ", x);
}
else
{
printf("%2d, ", x);
}
}
else
{
printf("%2d", x);
}
}
putchar('\n');
}
}
