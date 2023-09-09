#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing the last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
