
#include "main.h"
/**
*times_table - prints time table
*/
void times_table(void)
{
int m, h, x;
for (h = 0; h <= 9; h++)
{
_putchar('0');
for (m = 0; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
x = m * n;
if (x <= 9)
_putchar(' ');
else
{
_putchar(x / 10 + '0');
}
_putchar(x % 10 + '0');
}
_putchar('\n');
}
}
