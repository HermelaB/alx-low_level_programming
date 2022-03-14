#include <stdio.h>
/**
 * main - main function uses while loop
 *
 * Description: print base ten single digit number using while loop
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
