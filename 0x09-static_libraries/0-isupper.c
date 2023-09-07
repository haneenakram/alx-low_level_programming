#include "main.h"
/**
*_isupper - checks for uppercase character.
*@c: the characters being checked
*Return: Returns 1 if c is uppercase , Returns 0 otherwise
*/
int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
