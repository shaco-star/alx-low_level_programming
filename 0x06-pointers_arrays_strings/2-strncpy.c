#include"main.h"

/**
 * _strncpy - copy two strings
 *
 * @dest: first string
 * @src: second string
 * @n: number of char to be copied
 *
 * Return: address of copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (*src && i < n)
	{
		dest[i] = *src;
		++i;
		++src;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}

	return (dest);
}
