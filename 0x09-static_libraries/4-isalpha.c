#include "main.h"

/**
* _isalpha - checks if character is a lowercase or uppercase to return function
*
* @c: takes input from other function.
*
* Return: 1 if c is true else 0 to check if value is true or not
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
