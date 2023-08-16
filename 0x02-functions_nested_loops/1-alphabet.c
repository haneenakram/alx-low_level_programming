#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
char  print_alphabet(void)
{
	for (char i = 'a' ; i < 'z' ; i++)
		printf("%c");
	printf("\n");
}

int main(void)
{
print_alphabet();
return (0);
}
