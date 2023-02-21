#include <stdio.h>

/**
 * main - entry point
 *
 * Description - program prints all possible combinations of two digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			for (c = '2'; c <= '9'; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8' && c == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
