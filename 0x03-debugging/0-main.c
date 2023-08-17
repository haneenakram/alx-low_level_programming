#include "main.h"
/**
*positive_or_negative - tests function that prints if integer is positive or negative
*/
void positive_or_negative(int i)
{
if (i < 0)
	printf("%d i is negative", i);
else if (i == 0)
	printf("%d is zero", i);
else
	printf("%d is positive", i);
}
