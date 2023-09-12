#include "main.h"

/**
* _islower - function to check if character is lowercase to check the lowercase
*
* @c: checks input of function
* Return: returns 1 if c is lowercase
* Returns 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
