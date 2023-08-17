#include "main.h"
/**
*print_sign - print + if > 0, print - if < 0, print 0 if = 0
*@n: takes type of input
*Return: 1 if + , 0 and -1 if -
*/
int print_sign(int n)
{
if (n > 0)
{
printf("1");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-1");
return (-1);
}
}
