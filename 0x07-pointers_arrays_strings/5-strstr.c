#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer to the beginning of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	while (haystack[i])
	{
		while (haystack[j] && (haystack[i] == haystack[0]))
		{
			if (haystack[i + j] == haystack[j])
				j++;
			else
				break;
		}
		if (neddle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
