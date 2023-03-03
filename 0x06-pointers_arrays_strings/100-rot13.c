#include"main.h"

/**
 * rot13 - encode a string using root13 cipher
 *
 * @s: string
 *
 * Return: encoded string
*/

char *rot13(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if ((s[c] >= 'a' && s[c] <= 'm') || (s[c] >= 'A' && s[c] <= 'M'))
		{
			s[c] += 13;

		}
		else if ((s[c] >= 'n' && s[c] <= 'z') || (s[c] >= 'N' && s[c] <= 'Z'))
		{
			s[c] -= 13;
		}

		c++;
	}

	return (s);
}
