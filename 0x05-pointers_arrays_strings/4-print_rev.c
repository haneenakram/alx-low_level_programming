#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
*/
void rev_string(char *s)
{
int i=0;

while (s[i] != '\0')
	i++;
whilw (i--)
	_putchar(s[i]);
_putchar('\n');
}
