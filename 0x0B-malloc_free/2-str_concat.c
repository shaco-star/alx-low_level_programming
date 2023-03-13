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
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	len2 = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != '\0')
			len1++;
		if (s2[i] != '\0')
			len2++;
	}


	i = 0;
	s = malloc((sizeof(char) * len1) + (sizeof(char) * (len2 + 1)));
	if (s == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';



	return (s);
}
