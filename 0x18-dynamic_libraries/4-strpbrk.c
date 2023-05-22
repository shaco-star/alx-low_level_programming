#include"main.h"

/**
 * _strpbrk - locate a string in string
 *
 * @s: string
 * @accept: occurrence of that string
 *
 * Return: Null if not found or pointer to first occurrence
*/

char *_strpbrk(char *s, char *accept)
{
	int j;


	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		s++;
	}

	return (NULL);
}
