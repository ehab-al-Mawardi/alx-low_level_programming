#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character = 'a';
	char CHARACTER = 'A';

	/* characters small */
	while (character <= 'z')
	{
		putchar(character);
		character++;
	}

	putchar('\n');

	/* Characters Capital */
	while (CHARACTER <= 'Z')
	{
		putchar(CHARACTER);
		CHARACTER++;
	}

	return (0);
}
