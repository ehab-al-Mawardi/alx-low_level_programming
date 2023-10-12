#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for the school students
 * @argc: the number of args
 * @argv: Argument vector
 *
 * Return: Always 0.
 */

int main(int argc, chaar **argv)
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
		printf("Error\n"), exit(1);
	b = atoi(argv[1];
	if (b < 0)
		printf("Error\n"), exit(2);
	| while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");
	return (0);
}
