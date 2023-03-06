#include"main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: full string
 * @needle: occurrence of that string
 *
 * Return: pointer to when first occurrence
*/

char *_strstr(char *haystack, char *needle)
{
	char *n, *h;


	while (*haystack != '\0')
	{
		n = needle;
		h = haystack;

		while (*n != '\0' && *haystack == *n)
		{

			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;

	}
	return (NULL);
}
