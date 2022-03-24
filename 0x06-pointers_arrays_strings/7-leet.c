#include "main.h"
/**
* leet - encodes string into 1337.
* @s: - character to be coded.
* Description: change a to 4 e to 3
* o to 0 t to 7 and l to 1
*
* Return: always s
*/
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = o; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}
	return (s);
}
