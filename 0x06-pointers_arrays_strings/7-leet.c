#include"main.h"

/**
 * leet - encode a string into 1337
 *
 * @s: string
 *
 * Return: encoded string
*/

char *leet(char *s)
{
	int c = 0, i;
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	int n[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0')
	{
		for (i = 0; i <= 4; i++)
		{
			if (s[c] == upper[i] || s[c] == lower[i])
				s[c] = n[i];
		}
		c++;
	}
	return (s);
}
