#include "holberton.h"
/**
 * main - Entry point
 * 
 * Documentation: entry point 
 * Return: 0
 */
int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar ('\n');

	return (0);
}
