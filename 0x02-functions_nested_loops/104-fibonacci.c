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
	int x = 1, y = 2, sum = 0, prev;

	while (x <= 4000000)
	{
		if (x % 2 == 0)
	{
		sum += x;
	}

		prev = y;
		y = x + y;
		x = prev;
	}

	printf("Sum of even-valued terms: %d\n", sum);

	return (0);
}
