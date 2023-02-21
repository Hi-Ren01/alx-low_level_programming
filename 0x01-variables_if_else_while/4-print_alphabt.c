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
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
