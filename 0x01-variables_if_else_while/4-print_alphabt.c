#include <stdio.h>
/**
 * main - entry point
 *
 * Description: 'alphabet in lowercase except e and q'
 *
 * Return: o (success)
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a == 101 || a == 113)
			continue;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
