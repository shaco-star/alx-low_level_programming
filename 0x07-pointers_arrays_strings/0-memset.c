#include"main.h"

/**
 * _memset - fils memory with constant byte
 *
 * @s: points to memory area that we will fill
 * @b: constant byte
 * @n: number of byte to be filled
 *
 * Return: pointer to filled memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
