#include "main.h"

/**
* main - Entry point
*
* Descrption: prints the first 50 Fibonacci numbers
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		printf(", ");

		fib1 = fib2;
		fib2 = sum;
	}
		printf("%lu\n", fib1 + fib2);
		printf(", ");
	return (0);
}
