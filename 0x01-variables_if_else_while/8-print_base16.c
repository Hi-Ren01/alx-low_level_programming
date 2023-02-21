#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-Entry
 *
 * Description: This code will print numbers in base 16
 *
 * Return: 0
 */

int main(void)
{
	int r;

	for (r = '0'; r <= '9'; r++)
	{
		putchar(r);
	}
		for (r = 'a'; r <= 'f'; r++)
		{
			putchar(r);
		}
		putchar('\n');
		return (0);
}
