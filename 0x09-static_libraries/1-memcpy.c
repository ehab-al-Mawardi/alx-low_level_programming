#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: memory is stored here
 *@src: memory copied in here
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	while (n > 0)
	{
		dest[a] = src[b];
		a++;
		b++;
		n--;
	}
	return (dest);
}
