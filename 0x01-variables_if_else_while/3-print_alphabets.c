#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int main(void)
{
	char c;
char a;
	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);

	for (a = 'A' ; a <= 'Z' ; a++)
		putchar(a);
putchar('\n');
	return (0);
}
