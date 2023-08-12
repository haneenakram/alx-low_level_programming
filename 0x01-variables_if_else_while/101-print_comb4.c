#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int main(void)
{
int p, d, o;
for (p = '0' ; p < '9' ; p++)
{
for (d = p + 1 ; d <= '9' ; d++)
{
for (o = d + 1 ; o <= '9' ; o++)
{
if ((p != d) != o)
{
putchar(p);
putchar(d);
putchar(o);
if (p == '7' && d == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
