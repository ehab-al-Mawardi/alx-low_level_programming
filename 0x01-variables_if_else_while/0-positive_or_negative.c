#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: positive or negative
 *
 * Return: Alaways 0 (sucess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0;)
		printf("%i is positive\n", n);
	else if (n == 0;)
		printf(" is zero", n);
	else
		printf("is negative", n);
	return (0);
}
