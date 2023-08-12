#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int main(void)
{
char c;
for (c = '0' ; c <= '9' ; c++)
{
putchar(c);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
