#include "main.h"

/**
* main - Entry point
*
* Description: x + y then the sum of the last two numbers
*
* Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long total_sum = 0;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum >= 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu\n", total_sum);

	return (0);
}
