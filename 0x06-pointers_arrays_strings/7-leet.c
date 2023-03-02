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
	int upper[] = {97, 101, 111, 116, 108};
	int lower[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[c] !='\0')
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
