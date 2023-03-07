#include "main.h"
#include <stdio.h>

/**
 * _memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @b: the address of memory to print
 *
 * @n: bytes of the memory area pointed to by @s
 * @s: the size of the memory to print
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0

		while (i < n)
		{
			s[i] = b;
			i++;
		}
	return (s);
}
