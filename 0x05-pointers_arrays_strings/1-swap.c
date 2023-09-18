#include "main.h"

/**
 * swap_int - swap two variables
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	int T;

	T = *a;
	*a = *b;
	*b = T;
}
