#include "main.h"
/**
*jack_bauer - prints every minute of day
*/
void jack_bauer(void)
{
int m, h, x;
for (h = 0; h <= 9; h++)
{
for (m = 0; m <= 9; m++)
{
x = m * h;
if (x <= 9)
_putchar(' ');
else
{
_putchar(',');
_putchar(' ');
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
}
}
_putchar('\n');
}
}
