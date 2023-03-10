#include"main.h"

/**
 * _strspn - locate a character in string
 *
 * @s: string
 * @accept: occurrence of that character
 *
 * Return: Null if not found or pointer to first occurrence
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		flag = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
			j++;
		}
		if (!flag)
			break;
		i++;
	}

	return (i);
}
