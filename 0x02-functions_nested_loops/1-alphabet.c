#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int  print_alphabet(void)
{
	char i;
	for (i = 'a' ; i < 'z' ; i++)
		printf("%c",i);
	printf("\n");
	return (0);
}
