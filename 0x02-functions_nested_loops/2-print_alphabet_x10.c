#include "main.h"
/**
  *print_alphabet_x10 - print alphabet 10 times
  */
void print_alphabet_x10(void)
{
int i, cnt = 1;
while (cnt <= 10)
{
for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
cnt++;
_putchar('\n');
}
}
