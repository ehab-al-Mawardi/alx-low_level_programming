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
	char character = 'a';

	while (character <= 'z')
	{
		if (character == 'e' || character == 'q')
			character++;
		putchar(character);
		character++;
	}
	putchar('\n');

	return (0);
}
