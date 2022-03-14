#include <stdio.h>
/**
 * main - function holds all the single digits 
 * 
 * Descriptio: print all the numbers single digits
 * Return: 0
 */
int main(void)
{
	int c = 48;

	while (c <=57)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(',');
		}
		c++;
	}
	putchar('\n');

	return (0);
}
