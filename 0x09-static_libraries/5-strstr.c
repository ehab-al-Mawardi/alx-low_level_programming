#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, b;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[i + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[i]);
	}
	return (NULL);
}
