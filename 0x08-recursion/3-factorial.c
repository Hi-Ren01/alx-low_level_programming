#include "main.h"

/**
 * int factorial - returns the factorial of a given number
 *
 * @n: int
 *
 * Return: int
 */

int factorial(int n)
{
	int x;

	if (x == 0)
	{
		return (1);
	}
	else if (x < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
