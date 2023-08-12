#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - main is the entry point
 *Return: return 0 (succsess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is is positive\n", n);
	}
	else
		printf("%d is is nagetive\n", n);
	return (0);
}
