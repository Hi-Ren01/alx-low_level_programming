#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-Entry
 *
 * Description: This code will print a combo of numbers
 *
 * Return: 0
 */

int main(void)

{
	int r;

	for (r = '0'; r <= '9'; r++)
	{
		putchar(r);
		if (r != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
