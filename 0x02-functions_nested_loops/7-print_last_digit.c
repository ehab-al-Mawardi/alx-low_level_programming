#include "main.h"

/**
* print_last_digit - this is to print int print_last_digit(int);
*
* @n: takes number input
*
* Return: lastdigit of number
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;

	_putchar(lastdigit + '0');
	return (lastdigit);
}
