#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'Print all possible different combinations of two digits'
 *
 * Return: o (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);

				if (i == '8' && j == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
