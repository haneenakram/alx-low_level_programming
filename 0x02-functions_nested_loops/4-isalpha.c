#include "main.h"
/**
*_isalpha - checks if letter is upper or lower
*@c: takes input from other functions
*Return: return 1 if true else 0
*/
int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
{
return (1);
}
else
{
return (0);
}
}
