#include <stdio.h>
/**
 * main - entry point
 *
 * Description: 'prints the alphabet in lowercase, and then in uppercase'
 *
 * Return: o (success)
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
{
	putchar(a);
	a++;
}
while (b <= 90)
{
	putchar(b);
	b++;
}
putchar('\n');
	return (0);
}
