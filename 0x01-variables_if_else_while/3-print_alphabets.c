#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	char a;

	for (a = 'A' ; a <= 'Z' ; a++)
		putchar(a);
putchar('\n');
	return (0);
}
