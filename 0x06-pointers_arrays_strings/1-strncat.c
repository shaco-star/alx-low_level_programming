#include"main.h"

/**
 * _strncat - concat two strings
 *
 * @dest: first string
 * @src: second string
 * @n: number of char for second string
 *
 * Return: address of @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c1, c2;

	c1 = 0;
	while (dest[c1])
		c1++;

	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
		dest[c1 + c2] = src[c2];

	dest[c1 + c2] = '\0';

	return (dest);
}
