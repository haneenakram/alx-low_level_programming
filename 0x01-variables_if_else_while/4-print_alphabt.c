#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
	if (c != 'e' && c != 'q')
		putchar(c);
}
putchar('\n');
return (0);
}
