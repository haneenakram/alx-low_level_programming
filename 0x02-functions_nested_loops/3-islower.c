#include "main.h"
/**
  *_islower - fn checks if character is lower
  *@c: checks input of character
  *Retern: return 1 if c is lower otherwise return 0
  */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
