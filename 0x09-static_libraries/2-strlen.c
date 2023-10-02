#include "main.h"

/**
* _strlen - function that returns the length of a string in a c program
* @s: input function that returns the l
* Return: Value is length of string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}
