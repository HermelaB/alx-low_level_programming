#include "main.h"
/**
 * cap_string - capitalize after separator words
 * @s: character to capitalize after separator
 * Return: return value of upper
 */

char *cap_string(char *s)
{
	int i, x;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}
		
		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[i] == separatprs[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
