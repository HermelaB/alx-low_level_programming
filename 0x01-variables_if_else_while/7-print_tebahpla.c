#include <stdio.h>
/**
 * main - uses while loop function
 *
 * Description: printing alhabet in reverse using while loop
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
