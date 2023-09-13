#include "main.h"

/**
* main - Entry point
*
* Description:
*
* Return: Always 0 (Success)
*/

int main(void)
{
	unsigned int fib1 = 1, fib2 = 2, sum;
	int count;

		printf("%llu, %llu", fib1, fib2);

		for (count = 3; count <= 98; count++)
		{
			sum = fib1 + fib2;

			printf(", %llu", sum);

			fib1 = fib2;
			fib2 = sum;
		}

			printf("\n");

	return (0);
}
