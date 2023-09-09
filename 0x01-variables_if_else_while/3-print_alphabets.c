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

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}
	putchar('\n');

	while (character <= 'Z')
	{
		putchar(CHARACTER);
		CHARACTER++;

	}
	putchar('\n');

	return (0);
}
