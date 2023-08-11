#include <stdlib.h>
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
		printf("%d\n is zero");
	}
	else if (n > 0)
	{
		printf("%d\n is is positive");
	}
	else
		printf("%d\n is is nagetive");
	return (0);
}
