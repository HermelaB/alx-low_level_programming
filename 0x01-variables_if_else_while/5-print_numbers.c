#include <stdio.h>
/**
 * main - main funnction uses while loop function
 *
 * Description: print base ten single digit number using while loop
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");

	return (0);
}
