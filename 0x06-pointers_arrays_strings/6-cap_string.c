#include"main.h"

/**
 * string_toupper - change lower case to uppercase
 *
 * @s: string that will be changed
 *
 * Return: char
*/

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s >= 97 && *s <= 122)
		{
			if (i == 0)
				s[i] -= 32;

			if(s[i - 1] == 32 || s[i - 1] == 9 || s[i - 1] == 10 ||
					s[i - 1] == 44 || s[i - 1] == 59 || s[i - 1] == 46 ||
					s[i - 1] == 33 || s[i - 1] == 63 || s[i - 1] == 34 || 
					s[i - 1] == 40 || s[i - 1] == 41 || s[i - 1] == 123 || 
					s[i - 1] == 124)
			{
				s[i] -= 32;
			}

		}
		++i;
		++s;
	}

	return (s);
}