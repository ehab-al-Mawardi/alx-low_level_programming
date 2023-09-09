#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character = 'z';

	while (character >= 'a')
	{
		putchar(character);
		character--;
	}
	putchar('\n');

	return (0);
}
