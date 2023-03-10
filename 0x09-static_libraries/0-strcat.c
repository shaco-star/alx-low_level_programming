#include"main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: address of first string after concatenating
*/

char *_strcat(char *dest, char *src)
{
	int lFirst, lSecond;

	lFirst = 0;
	while (dest[lFirst])
		lFirst++;
	for (lSecond = 0; src[lSecond]; lSecond++)
		dest[lFirst++] = src[lSecond];

	return (dest);
}
