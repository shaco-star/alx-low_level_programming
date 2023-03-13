#include"stdlib.h"

/**
 * _strdup - point to newly allocated space in memory copy of a string
 *
 * @str: given string
 *
 * Return: address of new string or NULL if fails or str is NULL
*/

char *_strdup(char *str)
{
	char *s;
	int i, len;

	if (str == NULL)
		return (NULL);

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}



	return (s);
}
