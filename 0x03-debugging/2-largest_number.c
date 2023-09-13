#include "main.h"

/**
* largest_number - returns the largest of 3 integers
*
* @a: if a bigger than b and c then a the largest number
* @b: if b bigger than a and c then b is the largest
* @c: if c is the largest then it's bigger than a and b
*
* Return: 0
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
