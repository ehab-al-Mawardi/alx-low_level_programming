#include "main.h"

/**
* _abs - function that computes the absolute value int _abs(int n); positive
*
* @n: takes an integer type input for function
*
* Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
