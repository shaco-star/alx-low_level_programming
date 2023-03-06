#include"main.h"

/**
 * _strchr - locate a character in string
 *
 * @s: string
 * @c: occurrence of that character
 *
 * Return: Null if not found or pointer to first occurrence
*/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}
