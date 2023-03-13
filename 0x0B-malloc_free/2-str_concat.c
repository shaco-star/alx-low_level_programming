#include"stdlib.h"

/**
 * str_concat - concat 2 strings string
 *
 * @s1: given string 1
 * @s2: given string 2
 *
 * Return: address of new string or NULL if fails
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != '\0')
			len1++;
		if (s2[i] != '\0')
			len2++;
	}

	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;

	}
	s[i] = '\0';
	return (s);
}
