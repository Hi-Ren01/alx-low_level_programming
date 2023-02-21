#include <stdio.h>
/**
 * main - entry point
 *
 * Description: 'prints the alphabet in lowercase'
 *
 * Return: o (success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
return (0);
}
