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
	int c = 0, i;
	char alpha[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char root13[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	while (s[c] != '\0')
	{

		while (alpha[i] != '\0')
		{
			if (s[c] = alpha[i])
			{
				s[c] = root13[i];
				break;
			}
			i++;
		}

	}

		c++;
	}

	return (s);
}
