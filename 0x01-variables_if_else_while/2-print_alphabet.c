#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in lowercase only putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
