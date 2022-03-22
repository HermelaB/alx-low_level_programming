#include <stdio.h>
/**
 * main - Entry point
 * 
 * Documentation: entry point 
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char c;
	char s[] = "Holberton\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
