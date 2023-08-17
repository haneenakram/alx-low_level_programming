#include "main.h"
/**
*print_last_digit - computes the last digit
*@n: takes type of input
*Return: always 0
*/
int print_last_digit(int n)
{
int x;
x = n % 10;
_putchar(x + '0');
return (x);
}
