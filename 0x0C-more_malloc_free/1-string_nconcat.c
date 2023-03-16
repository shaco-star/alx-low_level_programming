#include<stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of char to take from @s2 string
 *
 * Return: pointer to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len = 0;
	unsigned int j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len++;

	str = malloc(sizeof(*str) * (len + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';

	return (str);


}
