#include <stdio.h>
/**
 * main - no function other than putchar
 *
 * Description: hexadecimal valus in lowercase using putchar
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
