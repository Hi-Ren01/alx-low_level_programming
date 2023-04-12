#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if b==NULL or a char in b that is not 0 or 1
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int num1 = 0;
	int num2;

	if (b == NULL)
	{
		return (0);
	}

	num2 = 0;
	while (b[num2] != '\0')
	{
		if (b[num2] == '0')
		{
			num1 = num1 << 1;
		}
		else if (b[num2] == '1')
		{
			num1 = (num1 << 1) | 1;
		}
		else
		{
			return (0);
		}
		num1++;
	}
	return (num1);
}
