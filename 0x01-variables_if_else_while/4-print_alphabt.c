#include <stdio.h>
/**
 *main - uses while loop
 *
 * Description: printing alphabt in lower case except q and e using while loop
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch !='e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}

	putchar('\n');
	return (0);
}

