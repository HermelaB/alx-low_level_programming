#include <stdion.h>
/**
 * main - use while loop function
 *
 * Description: printing alphabet in revers using while loop
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
